#include <iostream>
using namespace std;
class A
{
  public:
    A(int x1)
    {
        x = x1;
    }
    void print()
    {
        cout << "x = " << x << endl;
    }

  private:
    int x;
};

class B : private A
{
  public:
    B(int x1, int y1) : A(x1)
    {
        y = y1;
    }
    A::print; //访问声明，把基类的公有成员函数 print调整为私有派生类的公有成员函数

  private:
    int y;
};

int main()
{
    B b(10, 20);
    b.print();
    return 0;
}