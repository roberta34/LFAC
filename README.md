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
   The interpreter validates:
   1. **Class member access**
      - accessed field/method must exist in the class
   2. **Identifier correctness**
      - every identifier must be previously defined
      - no duplicate definitions in the same scope
   3. **Type consistency**
      - operands in expressions must have the type
      - assignment sides must have identical types
      - function call parameters must match the definition
     
## Abstract Syntax Tree (AST)
   The project constructs ASTs for:
   - arithmetic expressions
   - boolean expressions
   - assignments
   - Print calls
   **AST Rules**:
   - leaves: identifiers or constants
   - internal nodes: operators
   - unary operators supported

## Expression Evaluation
   Each AST is evaluated using a dedicated method that:
   - recursively evaluates subtrees
   - combines results according to operators
   - returns a typed object
   **Evaluation Behaviour**
   Leaf nodes:
   - constant -> return value
   - identifier -> returns value from symbol table
   - unsupported expression -> default value of type
   Special cases:
   - assignment -> updates symbol table
   - *Print* -> evaluates and outputs expression

## Main Block Evaluation
   For each statement in the main block:
   - the corresponding AST is evaluated (if not NULL)

## Constraints Respected
   The language enforces:
   - main block exists in global scope
   - no variables/functions inside main block
   - local variables allowed only inside functions
   - classes only in global scope
   - no implicit type casting

## Technologies used
   - C/C++
   - Flex & Bison
   - Shell
   
## Download and Setup Guide
### 1. Clone the Repository
````
git clone [https://github.com/roberta34/My-Programming-Language.git](https://github.com/roberta34/My-Programming-Language.git)
cd My-Programming-Language
````
### 2. Install Required Dependencies
Make sure the following tools are installed on your system:
   - g++
   - flex
   - bison
   - bash
On Ubuntu/WSL you can install them with:
````
sudo apt update
sudo apt install build-essential flex bison
````
Verify installation:
````
g++ --version
flex --version
bison --version
````
### 3. Compile the Project
The project includes a helper script for compilation.
Run:
````
chmod +x compile.sh
./compile.sh
````
This script will:
   - generate the lexer from limbaj.l
   - generate the parser from limbaj.y
   - compile all .cpp sources
   - produce the executable limbaj

### 4. Run the Language Interpreter
After compilation, run the interpreter using:
````
./runtests.sh
````

### 5. Output Files
During execution the program generates:
   - tables.txt - contains all symbol tables generated during execution
   - console output - results of *Print(expr)* calls
   - error messages - semantic or syntax errors

## Project Structure
````
.
├── limbaj.l          # lexical analyzer (Flex)
├── limbaj.y          # grammar and parser (Bison)
├── ASTnode.cpp/hpp   # AST implementation
├── symbol_table.cpp/hpp
├── valoare.hpp       # typed value wrapper
├── compile.sh        # compilation script
├── runtests.sh       # testing script
├── tables.txt        # generated symbol tables
└── tests/            # example programs
````
