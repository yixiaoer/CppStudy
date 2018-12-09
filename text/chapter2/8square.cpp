#include <iostream>
using namespace std;
//关于函数重载
int square(int i)
{
    return i * i;
}

long square(long l)
{
    return l * l;
}

double square(double d)
{
    return d * d;
}

int main()
{
    int i = 12;
    long l = 12345;
    double d = 1.111;
    cout << i << " * " << i << " = " << square(i) << endl;
    cout << l << " * " << l << " = " << square(l) << endl;
    cout << d << " * " << d << " = " << square(d) << endl;
    return 0; //实际上调用了三个不同的函数版本，有系统根据传送的不同参数类型来决定调用哪个函数版本
}