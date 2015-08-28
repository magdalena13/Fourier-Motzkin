#include <iostream>
#include <memory>

using namespace std;

typedef string Variable;
typedef set<Variable> VariableSet;

class BaseFormula;

typedef shared_ptr<BaseFormula> Formula;

class BaseFormula : public enable_shared_from_this<BaseFormula>
{
public:
    enum Type {T_EQUALITY, T_LESS, T_GREATER, T_LESS_EQUALS, T_GREATER_EQUALS};

    virtual Type getType() const = 0;
    virtual void printFormula() const = 0;
    virtual void getVars(VariableSet & vars) = 0;
};

class Equality : public BaseFormula
{
private:
    Variable _op1;
    Variable _op2;

};

int main()
{



    return 0;
}
