# MY PROGRAMMING LANGUAGE
A project for the Formal Languages, Automata and Compilers course.

## Project Overview
This project implements a programming language that performs:
- lexical/syntax rules
- scope management through symbol tables
- semantic analysis
- evaluation of arithmetic and boolean expressions using ASTs

The implementation respects strict syntactic and semantic constraints and models the behavior of a simplified object-oriented language.

## Features
1. **Supported Data Types**
   The language includes predifined types:
   - int
   - float
   - string
   - bool
2. **Classes Support**
   The language allows:
   - object initialization
   - field access
   - method access
   Classes are defined only in the global scope.

## Expressions
   The interpreter supports:
   - arithmetic expressions
   - boolean expressions
   All operands on the right side of an expression must have the **same type**, there is no casting support.

## Statements
   Supported control and functional constructs:
   - **if boolean_expression then**
   - **while boolean_expression do**
   - assignments
   - function calls
   - global function definitions
   - predefined function: **Print(expr)**;

## Scope Management
   The project implements **symbol tables** corresponding to program scopes.
   **Implemented Scopes**
   1. *Global scope*
        - contains the entire program
        - includes all functions, classes, and global blocks
   2. *Function/Method scope*
        - introduced by each function definition
   3. *Class scope*
        - introduced by each class definition

## Symbol Table Structure
   Each symbol table is implemented as a class and containts:
        - table name
        - pointer to parent scope
        - list of locally defined identifiers
    Stored Information
        - **variables** -> name, type, value
        - **functions** -> name, return type, parameters

## Semantic Analysis
    The interprer 
