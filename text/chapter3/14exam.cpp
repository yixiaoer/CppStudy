#include <iostream>
using namespace std;
class exam
{
  public:
    exam()
    {
        x = 123; //不带参数的构造函数
    }

    exam(int n)
    {
        x = n; //带 1 个参数的构造函数
    }

    int get_x()
    {
        return x;
    }

  private:
    int x;
};

int main(int argc, char const *argv[])
{
    exam ob1[4] = {99, 100, 100, 92};
    exam ob2[4] = {98, 95};
    for (int i = 0; i < 4; i++)
        cout << ob1[i].get_x() << " ";
    cout << endl;
    for (int i = 0; i < 4; i++)
        cout << ob2[i].get_x() << " ";
    return 0;
}
