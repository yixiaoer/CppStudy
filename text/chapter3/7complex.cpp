#include <iostream>
using namespace std;
//用成员初始化列表对数据成员进行初始化
class D
{
  public:
    D(int i) : mem2(i), mem1(mem2 + 1)
    {
        cout << "mem1 : " << mem1 << endl; //产生 warning，且 mem1 的值为一个奇奇怪怪的值
        cout << "mem2 : " << mem2 << endl; //因为数据成员是按照它们在类中声明的顺序进行初始化的
        //mem1 数据成员在 2 之前被初始化，此时 mem2 尚未初始化，是个随机值
    }

  private:
    int mem1;
    int mem2;
};

int main()
{
    D d(15);
    return 0;
}