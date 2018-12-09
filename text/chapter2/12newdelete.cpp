#include <iostream>
using namespace std;
int main()
{
    int *ptr;      //定义一个整型指针变量
    ptr = new int; //动态分配一个整型存储空间，并将首地址赋给 ptr
    *ptr = 10;
    cout << *ptr;
    delete ptr;
    return 0;
}