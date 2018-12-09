#include <iostream>
using namespace std;
//将引用作为函数参数
void swap(int &m, int &n)
{
    int temp;
    temp = n;
    n = m;
    m = temp;
}

int main()
{
    int a = 5, b = 10;
    cout << "a = " << a << "  b = " << b << endl;
    swap(a, b); //实参 a 和 b 是整型变量，可以通过引用来修改实参 a 和 b 的值
    cout << "a = " << a << "  b = " << b << endl;
    return 0;
}