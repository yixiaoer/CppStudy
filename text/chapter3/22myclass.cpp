#include <iostream>
using namespace std;
class myclass
{
  public:
    static int i;
    int geti()
    {
        return i;
    }
};

int myclass::i = 0; //静态数据成员的初始化

int main()
{
    myclass::i = 200; //公有静态数据成员可以在对象定义之前被访问
    myclass ob1, ob2;
    cout << "ob1.i=" << ob1.geti() << endl;
    cout << "ob2.i=" << ob2.geti() << endl;
    ob1.i = 300; //共有静态数据成员可以通过对象进行访问
    cout << "ob1.i=" << ob1.geti() << endl;
    cout << "ob2.i=" << ob2.geti() << endl;
    return 0;
}