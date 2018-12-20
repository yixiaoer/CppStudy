#include <iostream>
using namespace std;
class Base
{
  public:
    void setx(int n)
    {
        x = n; //成员函数可以访问本类的私有成员 x
    }

    void showx()
    {
        cout << x << endl; //成员函数可以访问本类的私有成员 x
    }

  private:
    int x;
};

class Derived : private Base
{
  public:
    void setxy(int n, int m)
    {
        setx(n); //基类的函数 setx() 在基类中是 public 的，在私有继承之后，变成了子类的 private 的，子类成员函数可以访问
        y = m;   //成员函数可以访问本类的私有成员 y
    }
    void showxy()
    {
        //cout << x;错误 ❌【子类成员无法继承父类的私有成员，不能直接访问】
        showx(); //函数是子类的父类的 public 型，则可以访问
        cout << y << endl;
    }

  private:
    int y;
};

int main()
{
    Derived obj;
    //obj.setx(10); 错误 ❌【该函数到了这个类时，是私有成员，无法通过外部访问】
    // obj.showx();错误 ❌【该函数到了这个类时，是私有成员，无法通过外部访问】
    obj.setxy(20, 30);
    obj.showxy();
    return 0;
}
