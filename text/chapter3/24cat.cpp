#include <iostream>
using namespace std;
class Small_cat
{
  public:
    Small_cat(double w); //声明构造函数
    void dispaly(Small_cat &w);
    static void total_disp();

  private:
    double weight;              //普通数据成员，表示一只小猫的重量
    static double total_weight; //静态数据成员，来累计小猫的重量
    static int total_number;    //静态数据成员，来累计小猫的只数
};

Small_cat::Small_cat(double w)
{
    weight = w;
    total_weight += w; //累加小猫重量
    total_number++;    //累加小猫只数
}

void Small_cat::dispaly(Small_cat &w)
{
    cout << "这只小猫的重量是 :" << w.weight << " 千克" << endl;
}

void Small_cat::total_disp()
{
    cout << total_number << "只小猫的总重量是 :" << total_weight << " 千克" << endl;
}

int Small_cat::total_number = 0;
double Small_cat::total_weight = 0.0;

int main()
{
    Small_cat cat1(0.5), cat2(1.7), cat3(1);
    cat1.dispaly(cat1);
    cat2.dispaly(cat2);
    cat3.dispaly(cat3);
    Small_cat::total_disp();
    return 0;
}
