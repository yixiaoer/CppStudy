#include <iostream>
using namespace std;
class Base
{
  public:
    int z;
    void setx(int i)
    {
        x = i;
    }
    int getx()
    {
        return x;
    }

  private:
    int x;

  protected:
    int y;
};

class Derived : protected Base
{
  public:
    int p;
    void setall(int a, int b, int c, int d, int e, int f);
    void show();

  private:
    int m;

  protected:
    int n;
};

void Derived::setall(int a, int b, int c, int d, int e, int f)
{
    //x = a;错误 ❌【a 是 Base 的私有成员，不可以被子类继承，不可以访问】
    setx(a);
    y = b;
    z = c;
    m = d;
    n = e;
    p = f;
}

void Derived::show()
{
    //cout << "x = " << x << endl;
    cout << "x = " << getx() << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
    cout << "m = " << m << endl;
    cout << "n= " << n << endl;
}

int main()
{
    Derived obj;
    obj.setall(12, 123, 3124, 4, 312, 3);
    obj.show();
    //cout << "y = " << obj.y << endl;错误 ❌【y 是派生类 Derived 的被保护成员，不可以访问】
    cout << "p = " << obj.p << endl;
}