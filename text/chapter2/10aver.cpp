#include <iostream>
using namespace std;
int aver = 10; //全局变量 aver
int main()
{
    int aver; //局部变量 aver
    //aver = 25;
    cout << "aver is " << aver << endl; //输出局部变量
    return 0;
}