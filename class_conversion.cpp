#include <iostream>
using namespace std;

class A {};

class B {
  public:
    /* conversion from A (constructor): */
    B (const A& x) {cout<<"Constructor \n";}
    /* conversion from A (assignment): */
    B& operator= (const A& x) {return *this;}
    /* conversion to A (type-cast operator) */
    operator A() {return A();}
};

int main ()
{
  A foo;
  B bar = foo;    /* calls constructor */
  bar = foo;      /* calls assignment */
  foo = bar;      /* calls type-cast operator */
  return 0;
}
