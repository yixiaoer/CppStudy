#include <iostream>
#include <string>
using namespace std;
class Girl
{
  public:
    Girl(char *n, int d)
    {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        age = d;
    }
    friend void disp(Girl &); //声明 disp 函数为类 Girl 的友元函数
    ~Girl()
    {
        delete name;
    }

  private:
    char *name;
    int age;
};

void disp(Girl &x)
{
    cout << "女孩姓名：" << x.name << "  ，年龄：" << x.age << endl;
}

int main()
{
    Girl girl1("王芳", 11);
    disp(girl1);
    return 0;
}