#include <iostream>
using namespace std;
class Base
{
  public:
    Base()
    {
        cout << "Constructing base class\n";
    }
    ~Base()
    {
        cout << "Destructing base class\n";
    }
};

class Derived : public Base
{
  public:
    Derived()
    {
        cout << "Constructing derived class\n";
    }
    ~Derived()
    {
        cout << "Destructing derived class\n";
    }
};

int main()
{
    Derived obj;
    return 0;
}