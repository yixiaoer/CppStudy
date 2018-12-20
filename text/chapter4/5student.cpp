#include <iostream>
#include <string>
using namespace std;
class Student
{
  public:
    Student(int number1, string name1, float score1)
    {
        number = number1;
        name = name1;
        score = score1;
    }

    void print()
    {
        cout << "number : " << number << endl;
        cout << "name : " << name << endl;
        cout << "socre : " << score << endl;
    }

  protected:
    int number;
    string name;
    float score;
};

class UStudent : public Student
{
  public:
    UStudent(int number1, string name1, float score1, string major1)
        : Student(number1, name1, score1)
    {
        major = major1;
    }
    void print1()
    {
        print();
        cout << "major : " << major << endl;
    }

  private:
    string major;
};

int main()
{
    UStudent stu(12345, "Tom", 99, "CS");
    stu.print1();
    return 0;
}