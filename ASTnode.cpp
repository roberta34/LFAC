#include "ASTnode.hpp"
#include <cstdlib>

Value ASTNode::evaluate(SymbolTable* scope){
    //frunza
    if(!left && !right){
        if(label=="true") return Value::Bool(true);
        if(label=="false") return Value::Bool(false);

        if(isdigit(label[0]) || (label[0]=='-' && label.size()>1 )){
            return Value::Int(stoi(label));
        }

        if(label.find('.')!=string::npos){
            return Value::Float(stof(label));
        }

        SymbolEntry* entry=scope->lookup(label);
        if(entry){
            if(entry->varType=="integer"){
                return Value::Int(stoi(entry->value));
            }
            else if(entry->varType=="float"){
                return Value::Float(stof(entry->value));
            }
            else if(entry->varType=="bool"){
                return Value::Bool(entry->value=="true");
            }
            else if(entry->varType=="text"){
                return Value::String(entry->value);
            }

            return Value();
        }
    }

    if(label==":="){
        Value v= right->evaluate(scope);
        SymbolEntry* entry=scope->lookup(left->label);
        if(entry){
            if(v.type==ValueType::INT) entry->value=to_string(v.intValue);
            else if(v.type==ValueType::FLOAT) entry->value=to_string(v.floatValue);
            else if(v.type==ValueType::BOOL) entry->value=(v.boolValue ? "true" : "false");
            else if(v.type==ValueType::STRING) entry->value=v.stringValue;
        }
        return v;
    }

    if(label=="Print"){
        Value v = left->evaluate(scope);
        v.print();
        cout<<"\n";
        return v;
    }

    Value a=left->evaluate(scope);
    Value b=right->evaluate(scope);

    if(label=="-" && left && !right){
        Value v=left->evaluate(scope);
        if(v.type==ValueType::INT) return Value::Int(-v.intValue);
        if(v.type==ValueType::FLOAT) return Value::Float(-v.floatValue);
        return Value::Error();
    }

    if(label=="not" && left && !right){
        Value v=left->evaluate(scope);
        if(v.type==ValueType::BOOL) return Value::Bool(!v.boolValue);
        return Value::Error();
    }

    if(label=="+") return Value::Int(a.intValue + b.intValue);
    if(label=="-") return Value::Int(a.intValue - b.intValue);
    if(label=="*") return Value::Int(a.intValue * b.intValue);
    if(label=="/") return Value::Int(a.intValue / b.intValue);
    if(label=="<") return Value::Bool(a.intValue < b.intValue);
    if(label==">") return Value::Bool(a.intValue > b.intValue);
    if(label=="==") return Value::Bool(a.intValue == b.intValue);
    if(label=="and") return Value::Bool(a.boolValue && b.boolValue);
    if(label=="or") return Value::Bool(a.boolValue || b.boolValue);
    return Value::Error();
}