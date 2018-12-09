#include <iostream>
using namespace std;
#define doub(x) x * 2 //完成该数字乘 2
int main()
{
    for (int i = 1; i <= 3; i++) //对 i 要记得初始化吖！

        cout << i << "doubled is " << doub(i) << endl; //这一部分所得结果都是正确的
    cout << "1+2 doubled is " << doub(1 + 2) << endl;  //实际运行结果是5，因为宏定义的代码在程序中是被直接置换的
    return 0;
}