#include <iostream>
using namespace std;
class Base
{
  public:
    void setxy(int m, int n)
    {
        x = m;
        y = n;
    }
    void showxy()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }

  private:
    int x;

  protected:
    int y;
};

class Derived : public Base
{
  public:
    void setxyz(int m, int n, int l)
    {
        setxy(m, n);
        z = l;
    }
    void showxyz()
    {
        showxy();
        cout << "z = " << z << endl;
    }

  private:
    int z;
};

int main()
{
    Derived obj;
    obj.setxyz(30, 40, 50);
    obj.showxy();

    obj.showxyz();
    return 0;
}