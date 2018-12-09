#include <iostream>
using namespace std;
int aver;
int main()
{
    int aver;
    aver = 25;
    ::aver = 10;
    cout << "local aver: " << aver << endl;
    cout << "global aver: " << ::aver << endl;
    return 0;
}