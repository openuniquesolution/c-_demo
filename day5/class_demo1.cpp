#include<iostream>

using namespace std;

class Car {
    public:
        int a = 10;
};

int main(int argc, char const *argv[])
{
    Car car1;
    cout << car1.a << endl;

    Car car2;

    car2.a = 20;
    cout << car2.a;
}
