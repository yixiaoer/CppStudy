#include <iostream>
using namespace std;
//c.f. 引用与指针
int main()
{
    int i = 15;     //定义整型变量 i,赋初值为 15
    int *iptr = &i; //定义指针变量iptr，将变量 i 的地址赋给 iptr
    int &rptr = i;  //声明变量 i 的引用 rptr，tptr 是变量 i 的别名
    cout << "i is  " << i << "   address is  " << &i << endl;
    cout << "*iptr is  " << *iptr << "   address is  " << iptr << endl;
    cout << "rptr is  " << rptr << "   address is  " << &rptr << endl;
    i = 29;
    cout << "After change i to 29:" << endl;
    cout << "i is  " << i << endl;
    cout << "*iptr is  " << *iptr << endl;
    cout << "rptr is  " << rptr << endl;
    return 0;
}
//指针是通过地址间接访问某个变量；引用是通过别名直接访问某个变量