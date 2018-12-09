#include <iostream>
using namespace std;
int main()
{
    int i;
    int &j = i; //声明 j 是一个整型变量 i 的引用
    i = 30;
    cout << "i = " << i << "j = " << j << endl;
    j = 80;
    cout << "i = " << i << "j = " << j << endl;
    cout << "变量 i 的地址:" << &i << endl;
    cout << "变量 j 的地址:" << &j << endl;
}