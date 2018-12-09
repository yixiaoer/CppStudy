#include <iostream>
#include <cmath>
using namespace std;
class Complex
{
  public:
    Complex(double r, double i)
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
    Complex A(1.231, 943.2); //没有显式调用构造函数，在定义对象时即被自动调用

    cout << "该复数的绝对值为" << A.abscomplex() << endl;
    return 0;
}