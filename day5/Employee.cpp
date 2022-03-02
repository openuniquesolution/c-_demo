#include<iostream>
#include<string>

using namespace std;

class Employee
{
    private:
        float salary;
        int age; 
    public:
        string name;
        string empId;

    public:
        Employee(int empAge) {
            age = empAge;
        }
        Employee(){}
        float getSalary() {
            
            return (salary - 200 - 500);
        }

        void setSalary(float newSalary) {
            salary = newSalary;
        }
        void setAge(int newAge) {
            age = newAge;
        }
        int getAge(){
            return age;
        }

};

int main(int argc, char const *argv[])
{
    Employee emp;
    emp.empId = "EMP001";
    emp.name = "Demo1";
    emp.setSalary(100000);
    cout << emp.name << endl;
    cout << emp.empId << endl;
    cout << emp.getSalary() << endl;

    Employee emp1(20);

    emp1.empId = "EMP002";
    emp1.name = "Demo2";
    emp1.setSalary(10000);
    cout << emp1.name << endl;
    cout << emp1.empId << endl;
    cout << emp1.getSalary() << endl;
    cout << emp1.getAge() << endl;



    return 0;
}
