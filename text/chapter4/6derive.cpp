#include <iostream>
using namespace std;
class Base
{
  public:
    Base(int i)
    {
        x = i;
        cout << "Constructing base class\n";
    }
    ~Base()
    {
        cout << "Destructing base class\n";
    }
    void show()
    {
        cout << "x = " << x << endl;
    }

  private:
    int x;
};

class Derived : public Base
{
  public:
    Derived(int i) : Base(i), d(i)
    {
        cout << "Constructing Derived class\n";
    }
    ~Derived()
    {
        cout << "Destructing Derived class\n";
    }

  private:
    Base d;
};

int main()
{
    Derived obj(5);
    obj.show();
    return 0;
}