//用类类型替代 0struct.cpp 中的结构体类型
#include <iostream>
#include <cmath>
using namespace std;
class Complex //声明了一个名为 Complex 的类
{
  private:        //以下声明为私有的
    double real;  //私有数据成员，复数实部
    double image; //共有数据成员，复数虚部

  public:                         //以下声明为公有的
    void init(double r, double i) //公有成员函数，作为类的外部接口
    {
        real = r;
        image = i;
    }
    double abscomplex() //公有成员函数，作为类的外部接口
    {
        double t;
        t = real * real + image * image;
        return sqrt(t);
    }
};

int main()
{
    Complex A;
    A.init(1.223, 2.333); //A 是类外的对象，可以访问类中 public 部分，即可以访问公有成员函数
    cout << "复数的绝对值是：" << A.abscomplex() << endl;
    return 0;
}