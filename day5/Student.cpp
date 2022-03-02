#include<string>
#include<iostream>

using namespace std;


class Student
{
    public:
        string enrollmentNo;
        float age;

    public:
        Student();
        float getAge(){
            return age;
        }
        
};

int main(int argc, char const *argv[])
{
    Student student;

    student.enrollmentNo = "DemoUC";
    int s = student.getAge();
    cout << s;
    return 0;
}
