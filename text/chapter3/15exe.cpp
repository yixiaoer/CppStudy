#include <iostream>
using namespace std;
class exe
{
  public:
    void set_a(int a)
    {
        x = a;
    }

    void show_a()
    {
        cout << x << endl;
    }

  private:
    int x;
};

int main()
{
    exe ob;
    exe *p; //定义指向类 exe 的对象指针变量 p
    ob.set_a(2);
    ob.show_a();
    p = &ob;
    p->show_a();
    (*p).show_a();
    return 0;
}