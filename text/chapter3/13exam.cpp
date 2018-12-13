#include <iostream>
using namespace std;
class exam
{
  public:
    exam(int n)
    {
        x = n;
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
    exam obl[4] = {99, 100, 100, 92}; //当构造函数只有 1 个参数，在定义对象数组时，可以直接在等号后面的花括号内提供实参
    for (int i = 0; i < 4; i++)
        cout << obl[i].get_x() << " ";
    return 0;
}
