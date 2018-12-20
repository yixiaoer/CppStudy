#include <iostream>
using namespace std;
class Base
{
  public:
    void seta(int sa)
    {
        a = sa; //访问本类的中的保护成员 a
    }
    void showa()
    {
        cout << "a = " << a << endl; //访问本类的中的保护成员 a
    }

  protected:
    int a;
};

class Derive1 : private Base
{
  public:
    void setab(int sa, int sb)
    {
        a = sa; //访问基类中的被保护成员，私有继承的派生类中可以以私有成员的身份访问
        b = sb; //访问本类的中的保护成员 b
    }
    void showab()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }

  protected:
    int b;
};

class Derive2 : private Derive1
{
  public:
    void setabc(int sa, int sb, int sc)
    {
        setab(sa, sb);
        c = sc;
    }
    void showabc()
    {
        //cout << "a = " << a << endl;错误 ❌【a 在该 Derive1 中是私有的，在该类中是不可访问的】
        showab();
        //cout << "b = " << b << endl;
        cout << "c = " << c << endl;
    }

  private:
    int c;
};

int main()
{
    Base op1;
    op1.seta(21);
    op1.showa();
    Derive1 op2;
    op2.setab(232, 43);
    op2.showab();
    Derive2 op3;
    op3.setabc(321, 312, 4);
    op3.showabc();
    return 0;
}