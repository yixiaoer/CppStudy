#include <iostream>
using namespace std;
int main()
{
    int *p;
    p = new int(99); //动态分配内存空间，并将 99 作为初始值赋给它
    cout << *p;
    delete p;
    return 0;
}