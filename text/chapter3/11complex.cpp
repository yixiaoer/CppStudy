#include <iostream>
#include <cmath>
using namespace std;
class Complex
{
  public:
    Complex(double r = 0.0, double image = 0.0); //在声明构造函数时指定默认参数值
    double abscomplex();

  private:
    double real;
    double image;
};
Complex::Complex(double r, double i) //在类外定义构造函数时，可以不再指定参数的默认值
{
    real = r;
    image = i;
}
double Complex::abscomplex()
{
    double t;
    t = real * real + image * image;
    return sqrt(t);
}

int main(int argc, char const *argv[])
{
    Complex S1;
    cout << "复数 1 的绝对值是" << S1.abscomplex() << endl;
    Complex S2(1.1); //只传递了一个实参
    cout << "复数 2 的绝对值是" << S2.abscomplex() << endl;
    Complex S3(32.1, 325.6); //传递了两个实参
    cout << "复数 2 的绝对值是" << S3.abscomplex() << endl;
    return 0;
}
