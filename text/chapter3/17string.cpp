#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    string s1 = "ABC";
    string s2 = "DEF";
    string s3("GJI");
    string s4, s5;
    s4 = s1;
    cout << "s4 is " << s4 << endl;
    s5 = s1 + s2;
    cout << "s5 is " << s5 << endl;
    s5 = s1 + "123";
    cout << "s5 is " << s5 << endl;
    if (s1 > s4)
        cout << "s4 is " << s5 << endl;
    if (s4 == s1)
        cout << "s4 is " << s5 << endl;
    else
        cout << "s1 is " << s5 << endl;
    return 0;
}
