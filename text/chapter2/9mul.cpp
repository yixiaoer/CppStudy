#include <iostream>
using namespace std;
//参数个数不同的函数重载
int mul(int x, int y)
{
    return x * y;
}

int mul(int x, int y, int z)
{
    return x * y * z;
}

int main()
{
    int a = 3, b = 4, c = 5;
    cout << a << " * " << b << " = " << mul(a, b) << endl;
    cout << a << " * " << b << " * " << c << " = " << mul(a, b, c) << endl;
}