#include <iostream>
using namespace std;
class timer
{
  public:
    timer() //无参数的构造函数，给 seconds 清零
    {
        seconds = 0;
    }

    timer(const char *t) //含 1 个数字串参数的构造函数，注意这里定义的是 const char* 而不是 char*
    {
        seconds = atoi(t);
    }

    timer(int t) //含 1 个整型参数的构造函数
    {
        seconds = t;
    }

    timer(int min, int sec) //含 2 个整型参数的构造函数
    {
        seconds = min * 60 + sec;
    }

    int gettime()
    {
        return seconds;
    }

  private:
    int seconds;
};

int main(int argc, char const *argv[])
{
    timer a;        //定义类 timer 的对象 a，调用无参数构造函数
    timer b(10);    //定义类 timer 的对象 b，调用含 1 个整型参数的构造函数
    timer c("20");  //定义类 timer 的对象 c，调用含 1 个数字串参数的构造函数
    timer d(1, 20); //定义类 timer 的对象 c，调用含 2 个整型参数的构造函数
    cout << "secons1 = " << a.gettime() << endl;
    cout << "secons2 = " << b.gettime() << endl;
    cout << "secons3 = " << c.gettime() << endl;
    cout << "secons4 = " << d.gettime() << endl;

    return 0;
}
