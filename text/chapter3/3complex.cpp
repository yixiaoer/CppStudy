#include <iostream>
#include <cmath>
using namespace std;
class Complex
{
  public:
    Complex()
    {
        real = 0;
        image = 0;
    }

    void init(double r, double i)
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

  private:
    double real;
    double image;
};

int main()
{
    Complex A; //定义类 Complex 的对象 A 是调用不带参数的
    //构造函数 Complex 分别给数据成员 real 和 image 赋初值 0

    A.init(12.3, 21.3); //调用公有成员函数 init，分别给数据成员 real 和 image 赋值

    cout << "该复数的绝对值为" << A.abscomplex() << endl;
    return 0;
}