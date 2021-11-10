#include "ast.h"
#include <iostream>

class ContextStack
{
public:
    struct ContextStack *prev;
    map<string, Type> variables;
};

class FunctionInfo
{
public:
    int returnType;
    list<Parameter *> parameters;
};

map<string, Type> globalVariables = {};
map<string, Type> variables;
map<string, FunctionInfo *> methods;
map<string, Type> resultTypes = {
    {"INT,INT", INT},
    {"FLOAT,FLOAT", FLOAT},
    {"INT,FLOAT", FLOAT},
    {"FLOAT,INT", FLOAT},
};

string getTypeName(Type type)
{
    switch (type)
    {
    case INT:
        return "INT";
    case FLOAT:
        return "FLOAT";
    case VOID:
        return "VOID";
    case INT_ARRAY:
        return "INT_ARRAY";
    case FLOAT_ARRAY:
        return "FLOAT_ARRAY";
    case BOOL:
        return "BOOL";
    }

    cout << "Unknown type" << endl;
    exit(0);
}

ContextStack *context = NULL;

void pushContext()
{
    variables.clear();
    ContextStack *c = new ContextStack();
    c->variables = variables;
    c->prev = context;
    context = c;
}

void popContext()
{
    if (context != NULL)
    {
        ContextStack *previous = context->prev;
        free(context);
        context = previous;
    }
}

int BlockStatement::evaluateSemantic()
{
    list<Declaration *>::iterator itd = this->declarations.begin();
    while (itd != this->declarations.end())
    {
        Declaration *dec = *itd;
        if (dec != NULL)
        {
            dec->evaluateSemantic();
        }

        itd++;
    }

    list<Statement *>::iterator its = this->statements.begin();
    while (its != this->statements.end())
    {
        Statement *stmt = *its;
        if (stmt != NULL)
        {
            stmt->evaluateSemantic();
        }

        its++;
    }

    return 0;
}
int ExpressionStatement::evaluateSemantic()
{
    if (this->Expressions != NULL)
    {
        string exprType = getTypeName(this->Expressions->getType());
    }
    return 0;
}
int ForStatement::evaluateSemantic()
{
    pushContext();
    if (LeftExpression != NULL)
    {
        LeftExpression->evaluateSemantic();
    }
    if (RightExpression != NULL)
    {
        RightExpression->evaluateSemantic();
    }
    if (Statements != NULL)
    {
        Statements->evaluateSemantic();
    }
    pushContext();

    return 0;
}
int PrintStatement::evaluateSemantic()
{
    if (this->expr != NULL)
    {
        string exprType = getTypeName(this->expr->getType());
    }
    return 0;
}
int ReturnStatement::evaluateSemantic()
{
    if (this->expr != NULL)
    {
        string exprType = getTypeName(this->expr->getType());
    }
    return 0;
}
int ContinueStatement::evaluateSemantic()
{
    return 0;
}
int BreakStatement::evaluateSemantic()
{
    return 0;
}
int WhileStatement::evaluateSemantic()
{
    if(this->Expressions->getType() != BOOL){
        exit(0);
    }
    pushContext();
    if (Statements != NULL)
    {
        Statements->evaluateSemantic();
    }
    popContext();
    return 0;
}
int IfStatement::evaluateSemantic()
{
         if(this->Expressions->getType() != BOOL){          
        exit(0);
        }
        pushContext();
        if (Statements != NULL)
        {
            Statements->evaluateSemantic();
        }
        popContext();

    
    return 0;
}

int ElseStatement::evaluateSemantic()
{
         if(this->Expressions->getType() != BOOL){          
        exit(0);
        }

        pushContext();
        if (TrueStatement != NULL)
        {
            TrueStatement->evaluateSemantic();
        }
        popContext();


        pushContext();
        if (FalseStatement != NULL)
        {
            FalseStatement->evaluateSemantic();
        }
        popContext();

    
    return 0;
}

int GlobalDeclaration::evaluateSemantic()
{
    if (declaration != NULL)
    {
        declaration->evaluateSemantic();
    }
    return 0;
}

int Declaration::evaluateSemantic()
{

    list<InitDeclarator * >::iterator it = this->declarations.begin();
    while(it != this->declarations.end()){
        InitDeclarator * declaration = (*it);
        if(declaration->declarator->isArray){
            if(declaration->declarator->arrayDeclaration == NULL && declaration->initializer == NULL){
                
                exit(0);
            }
        }
        if(declaration->initializer != NULL){
            list<Expr *>::iterator ite = declaration->initializer->expressions.begin();
            while(ite!= declaration->initializer->expressions.end()){
                Type exprType = (*ite)->getType();
                if(exprType != FLOAT && exprType != INT){
                    exit(0);
                }
                ite++;
            }
        }
        
    it++;
  }
  return 0;
}

void addMethodDeclaration(string id, int line, int type, ParameterList params)
{
    if (methods[id] != 0)
    {
        cout << "Error en la linea [" << line << "]";
    }
    methods[id] = new FunctionInfo();
    methods[id]->returnType = type;
    methods[id]->parameters = params;
}

int MethodDefinition::evaluateSemantic()
{
    if (this->params.size() > 4)
    {
        cout << "Method: " << this->id << " can't have more than 4 parameters, line: " << this->line << endl;
        exit(0);
    }

    addMethodDeclaration(this->id, this->line, this->type, this->params);
    pushContext();
    list<Parameter *>::iterator its = this->params.begin();
    while (its != this->params.end())
    {
        Parameter *params = *its;
        if (params != NULL)
        {
            this->statement->evaluateSemantic();
        }

        its++;
    }

    if (this->statement != NULL)
    {
        this->statement->evaluateSemantic();
    }

    popContext();

    return 0;
}

Type IntExpr::getType()
{
    return INT;
}

Type FloatExpr::getType()
{
    return FLOAT;
}

#define IMPLEMENT_BINARY_GET_TYPE(name)                                                                                           \
    Type name##Expr::getType()                                                                                                    \
    {                                                                                                                             \
        string leftType = getTypeName(this->expr1->getType());                                                                    \
        string rightType = getTypeName(this->expr2->getType());                                                                   \
        Type resultType = resultTypes[leftType + "," + rightType];                                                                \
        if (resultType == 0)                                                                                                      \
        {                                                                                                                         \
            cerr << "Error: type " << leftType << " can't be converted to type " << rightType << " line: " << this->line << endl; \
            exit(0);                                                                                                              \
        }                                                                                                                         \
        return resultType;                                                                                                        \
    }

#define IMPLEMENT_BINARY_BOOLEAN_GET_TYPE(name)                                                                                   \
    Type name##Expr::getType()                                                                                                    \
    {                                                                                                                             \
        string leftType = getTypeName(this->expr1->getType());                                                                    \
        string rightType = getTypeName(this->expr2->getType());                                                                   \
        Type resultType = resultTypes[leftType + "," + rightType];                                                                \
        if (resultType == 0)                                                                                                      \
        {                                                                                                                         \
            cerr << "Error: type " << leftType << " can't be converted to type " << rightType << " line: " << this->line << endl; \
            exit(0);                                                                                                              \
        }                                                                                                                         \
        return BOOL;                                                                                                              \
    }

Type getUnaryType(Type expressionType, int unaryOperation)
{
    switch (unaryOperation)
    {
    case INCREMENT:
    case DECREMENT:
        if (expressionType == INT || expressionType == FLOAT)
            return expressionType;
    case NOT:
        if (expressionType == BOOL)
            return BOOL;
    }

    cerr << "Error: Invalid type" << endl;
    exit(0);
}

Type UnaryExpr::getType()
{
    Type exprType = this->expr->getType();
    return getUnaryType(exprType, this->type);
}

Type ArrayExpr::getType()
{
    return this->id->getType();
}

Type IdExpr::getType()
{
    //TODO
    return INVALID;
}

Type MethodInvocationExpr::getType()
{
    //TODO
    return INVALID;
}

Type PostIncrementExpr::getType()
{
    return this->expr->getType();
}

Type PostDecrementExpr::getType()
{
    //TODO
    return INVALID;
}

Type StringExpr::getType()
{
    //TODO
    return INVALID;
}

IMPLEMENT_BINARY_GET_TYPE(Add);
IMPLEMENT_BINARY_GET_TYPE(Sub);
IMPLEMENT_BINARY_GET_TYPE(Mul);
IMPLEMENT_BINARY_GET_TYPE(Div);
IMPLEMENT_BINARY_GET_TYPE(Assign);
IMPLEMENT_BINARY_GET_TYPE(PlusAssign);
IMPLEMENT_BINARY_GET_TYPE(MinusAssign);

IMPLEMENT_BINARY_BOOLEAN_GET_TYPE(Eq);
IMPLEMENT_BINARY_BOOLEAN_GET_TYPE(Neq);
IMPLEMENT_BINARY_BOOLEAN_GET_TYPE(Gte);
IMPLEMENT_BINARY_BOOLEAN_GET_TYPE(Lte);
IMPLEMENT_BINARY_BOOLEAN_GET_TYPE(Gt);
IMPLEMENT_BINARY_BOOLEAN_GET_TYPE(Lt);
IMPLEMENT_BINARY_BOOLEAN_GET_TYPE(LogicalAnd);
IMPLEMENT_BINARY_BOOLEAN_GET_TYPE(LogicalOr);
