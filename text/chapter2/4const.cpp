#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    const int T1 = a + a;
    const int T2 = T1 - T1;
    cout << "T2 is " << T2; //将 define 用 const 更换之后，就避免了 define 之前的问题
    return 0;
}