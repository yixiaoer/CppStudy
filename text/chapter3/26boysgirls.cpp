#include <iostream>
#include <string>
using namespace std;
class Boy; //对 Boy 类的提前引用声明

class Girl
{
  public:
    Girl(char N[], int A);
    friend void prdata(const Girl &, const Boy &);

  private:
    char name[25];
    int age;
};

Girl::Girl(char N[], int A)
{
    strcpy(name, N);
    age = A;
}

class Boy
{
  public:
    Boy(char N[], int A);
    friend void prdata(const Girl &plg, const Boy &plb);

  private:
    char name[25];
    int age;
};

Boy::Boy(char N[], int A)
{
    strcpy(name, N);
    age = A;
}

void prdate(const Girl &plg, const Boy &plb) //定义函数 prdate 为类 Girl 和 Boy 的友元函数
{                                            //形参 plg 和 plb 分别是 Girl 类和 Boy 类的对象的引用
    cout << "女孩的姓名：" << plg.name << endl;
    cout << "女孩的年龄：" << plg.name << endl;
    cout << "男孩的姓名：" << plb.name << endl;
    cout << "男孩的年龄：" << plb.name << endl;
}

int main()
{
    Girl g1("王芳", 11);
    Girl g2("李敏", 13);
    Boy b1("张三", 15);
    Boy b2("周华", 13);
    prdate(g1, b1);
    prdata(g2, b2);
    return 0;
}