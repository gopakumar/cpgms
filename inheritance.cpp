#include <iostream>
using namespace std;

class Mother {

  public:
    int age;
    Mother ()
    { cout << "Mother: no parameters\n"; }
    Mother (int a)
    { cout << "Mother: int parameter\n";age=50; }
};

class Daughter :public Mother  {
  public:
    Daughter (int a)
    { cout << "Daughter: int parameter\n\n";;}
    Daughter ()
    { cout << "Daughter: parameter\n\n"; }
};

class Son : public Daughter{
 int age;
  public:
    Son ()//int a) //: Mother (a)
  { cout << "Son: int parameter\n\n"; age=24;}
    void print_age()
    {cout << "age "<<age<<"\n";}
};

int main () {
//  Daughter kelly(2);
 // kelly.print_age();
  Son bud;//(24);
//  bud.print_age();
bud.print_age();
  return 0;
}
