#include <iostream>
#include <string>
using namespace std;
class Student
{
  public:
    Student(string name1, string stu_no1, float score1);
    //~Student();
    void show();
    void show_count_sum_ave();

  private:
    string name;      //普通数据成员，用于表示学生姓名
    string stu_no;    //普通数据成员，用于表示学生学号
    float score;      //普通数据成员，用于表示学生成绩
    static int count; //静态数据成员，用于统计学生人数
    static float sum; //静态数据成员，用于统计累计成绩
    static float ave; //静态数据成员，用于统计平均成绩
};

Student::Student(string name1, string stu_no1, float score1)
{
    //name = new char[strlen(name1) + 1];
    string name;
    //strcpy(name, name1);
    name = name1;
    //stu_no = new char[strlen(stu_no) + 1];
    string stu_no;
    //strcpy(stu_no, stu_no1);
    stu_no = stu_no1;
    score = score1;
    ++count;           //累加学生人数
    sum = sum + score; //累加成绩
    ave = sum / count; //计算平均成绩
}

/*
Student::~Student()
{
    delete[] name;
    delete[] stu_no;
    --count;
    sum = sum - score;
}*/

void Student::show()
{
    cout << "\n姓名：" << name;
    cout << "\n学号：" << stu_no;
    cout << "\n成绩：" << score;
}

void Student::show_count_sum_ave()
{
    cout << "\n学生人数：" << count;
    cout << "\n平均成绩：" << ave;
}

int Student::count = 0; //静态数据成员的初始化
float Student::sum = 0.0;
float Student::ave = 0.0;

int main()
{

    Student stud1("李明", "123456", 90); //建立第一个学生对象
    stud1.show();
    stud1.show_count_sum_ave();
    cout << "==============================" << endl;

    Student stud2("王华", "123458", 80); //建立第一个学生对象
    stud2.show();
    stud2.show_count_sum_ave();
    cout << "==============================" << endl;
    return 0;
}