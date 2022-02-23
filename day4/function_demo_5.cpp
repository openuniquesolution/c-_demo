#include <iostream>

using namespace std;

int sum(int a, int b);

int sum(int a, int b, int c);

int sum(int a, int b, float c);
int sum(int a, int b, long c);

int main(int argc, char const *argv[])
{
    cout << sum(10,11,10.5f) << endl;
    cout << sum(10,11,10) << endl;
    cout << sum(10,11,10L) << endl;
    return 0;
}

int sum(int a, int b){
    return a+ b;
}

int sum(int a, int b, int c){
    return a + b + c;
}


int sum(int a, int b, float c){
    return a + b - c;
}


int sum(int a, int b, long c){
    return a + b - c;
}