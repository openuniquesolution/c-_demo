#include<iostream>
#include<string>

using namespace std;

class Employee
{
    
    public:
        string name;
    // protected:
        float salary = 500;
    
};

class Teacher : public Employee
{

    public:
        string subject;

    // private:
        float salary = 2000;

    public:
        void setSalary(float newSalary) {
            salary = newSalary;
        }
    
        float getSalary() {
            return salary;
        }

};

int main(int argc, char const *argv[])
{
    Teacher t1;
    Employee emp;

    cout << t1.name <<endl;
   
    cout << t1.salary << endl;
    cout << t1.subject << endl;
    cout << emp.salary << endl;
    return 0;
}



