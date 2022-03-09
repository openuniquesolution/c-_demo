#include<iostream>
#include<string>

using namespace std;

class Calculator
{

    public:
        int sum(int a, int b) {
            cout << "int int";
            return a+b;
        }

        float sum(float a, float b) {
            cout << "Float Float";
            return a+b;
        }

        float sum(float a, int b) {
            cout << "Float int";
            return a+b;
        }

        float sum(int a, float b) {
            cout << " int float";
            return a+b;
        }



        int sum(int a,int b, int c) {
            return a+b+c;
        }
        float sum(int a,float b, int c) {
            return a+b+c;
        }
  
};

int main(int argc, char const *argv[])
{
    Calculator c;
    cout << c.sum(10,20.6f) << endl;
    cout << c.sum(10,20,30) << endl;
    return 0;
}

