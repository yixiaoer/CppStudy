#include <iostream>
using namespace std;
//通过对象名和对象选择符访问对象中的成员
class Point
{
  public:
    void setpoint(int a, int b)
    {
        x = a;
        y = b;
    }
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }

  private:
    int x, y;
};

int main()
{
    Point op1, op2;
    int i, j;
    op1.setpoint(3, 9);
    op2.setpoint(1, 2);
    i = op1.getx();
    j = op1.gety();
    cout << "op1 i =  " << i << "   op1 j = " << j << endl;
    i = op2.getx();
    j = op2.gety();
    cout << "op1 i =  " << i << "   op1 j = " << j << endl;
    return 0;
}