#include <iostream>
using namespace std;
//构造函数重载的例子
class Date
{
  public:
    Date();                    //声明 1 个无参数的构造函数
    Date(int y, int m, int d); //声明 1 个带有 3 个参数的构造函数
    void showDate();

  private:
    int year;
    int month;
    int day;
};

Date::Date() //定义 1 个无参数的构造函数
{
    year = 2000;
    month = 1;
    day = 29;
}

Date::Date(int y, int m, int d) //定义 1 个带有 3 个参数的构造函数
{
    year = y;
    month = m;
    day = d;
}

inline void Date::showDate()
{
    cout << year << "." << month << "." << day << endl;
}

int main()
{
    Date date1;
    cout << "Date1 output:" << endl;
    date1.showDate();
    Date date2(2018, 2, 3);
    cout << "Date2 output:" << endl;
    date2.showDate();
    return 0;
}
