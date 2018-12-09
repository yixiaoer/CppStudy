#include <iostream>
using namespace std;
int main()
{
    int a = 1;
#define T1 a + a;
#define T2 T1 - T1;
    cout << "T2 is " << T2; //看程序似乎应该输出0，但实际输出2，因为 define
    return 0;               //做的只是简单的替换，则T2 = a + a - a + a = 3
}