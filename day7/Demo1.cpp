#include <iostream>
#include <string>

using namespace std;

class Parent
{
private:
    int a = 10;
public:
    void printMyName() {
        cout << "Ayush" << endl;
    }

    void donate(int amount) {
        cout << amount << endl;
    }
};


class Child : public Parent
{
private:
    int b = 20;
public:
    int printMyName() {
       cout << "Child" << endl;
       return 1;
   }

   void donate(int motherNAme) {
        cout << "Doante Child" << endl;
    }
};

int main(int argc, char const *argv[])
{
    Parent p;
    Child c;

    c.printMyName();
    c.donate(2);
    p.printMyName();
    p.donate(1);
    return 0;
}
