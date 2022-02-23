#include <iostream>

using namespace std;

float sumToNumber(float a, float b =10, float c = 40);

int main(int argc, char const *argv[])
{
    float i = 10.6;
    float j = 40;

    float k = sumToNumber(i);
   
    cout << k;
    cout << "\n";
    int L = sumToNumber(10.7, 40);

    cout << L;
    return 0;
}

float sumToNumber(float a, float b, float c) {
    cout << b;
    cout << c;
    cout << "\n";
    return a + b + c;
}
