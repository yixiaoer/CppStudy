#include <iostream>
#include <cmath>
using namespace std;
class Complex
{
  public:
    Complex(double r = 0.0, double i = 0.0);
    ~Complex(); //声明析构函数
    double abscomplex();

  private:
    double real;
    double image;
};

Complex::Complex(double r, double i)
{
    real = r;
    image = i;
    cout << "Constructor called." << endl;
}

Complex::~Complex()
{
    cout << "Destructor called." << endl;
}

double Complex::abscomplex()
{
    double t;
    t = real * real + image * image;
    return sqrt(t);
}

int main(int argc, char const *argv[])
{
    Complex A(31.302, 32.3);
    cout << "abs is  " << A.abscomplex() << endl;
    return 0;
}
