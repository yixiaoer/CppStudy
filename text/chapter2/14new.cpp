#include <iostream>
using namespace std;
//对动态分配是否成功进行检查
int main()
{
    int *p;
    p = new int;
    if (!p)
    {
        cout << "allocation failure\n";
        return 1;
    }
    *p = 20;
    cout << *p;
    delete p;
    return 0;
}