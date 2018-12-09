//用 C++ 的结构体类型求复数的绝对值
#include <iostream>
#include <cmath>
using namespace std;
struct Complex
{                                 //声明了一个名为 Complex 的结构体类型
    double real;                  //数据成员，复数的实部
    double image;                 //数据成员，复数的虚部
    void init(double r, double i) //成员函数，给 real 和 image 赋初值
    {
        real = r;
        image = i;
    }
    double abscomplex()
    {
        double t;
        t = real * real + image * image;
        return sqrt(t);
    }
};

int main()
{
    Complex A;            //定义结构体 Complex 的变量 A
    A.init(1.322, 322.1); //调用成员函数 init，给 real 和 iamge 赋初值
    cout << "复数的绝对值是:  " << A.abscomplex() << endl;
    return 0;
}