#include <iostream>
//用成员初始化列表对引用类型的数据成员和 const 修饰的数据成员初始化
using namespace std;
class A
{
  public:
    A(int x1) : x(x1), rx(x), pi(3.14) //用成员初始化列表对引用类型的数据成员 rx 和 const 修饰的数据成员 pi 初始化
    {
    }
    void print()
    {
        cout << "x =  " << x << "  rx = " << rx << "  pi = " << pi << endl;
    }

  private:
    int x;
    int &rx;
    const double pi;
};

int main()
{
    A a(10);
    a.print();
    return 0;
}