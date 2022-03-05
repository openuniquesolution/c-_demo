#include<iostream>
#include<string>

using namespace std;

class Employee
{
public:
    string name = "Ayush";
private:
    string empId = "EmpId";
protected:
    float salary = 122928;
};

class Teacher : public Employee
{

    public: 
        string sub = "english" ;
    
    public:
        float fun1() {
            return salary;
        }
    
};

int main(int argc, char const *argv[])
{
    Teacher tech;
    cout << tech.name << endl;
    cout << tech.fun1() << endl;
    cout << tech.sub << endl;

    return 0;
}

