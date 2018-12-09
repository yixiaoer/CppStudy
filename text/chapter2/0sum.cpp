#include <iostream>
using namespace std; //使用命名空间 std

//或将上面两行换成下面一行(书上据说可以，但 emmm 尝试并不行，是环境的原因嘛？)
//#include <iostream.h>
int main(int argc, char const *argv[])
{
    int x, y, sum;
    cout << "please input two integets:" << '\n'; //cout，标准输出流对象；"<<" 插入运算符，也称输出运算符
    cin >> x;                                     //cin，标准输入流对象
    cin >> y;                                     //">>" 提取运算符，也称输入运算符
    sum = x + y;
    cout << "x+y=" << sum << endl;
    return 0;
}
