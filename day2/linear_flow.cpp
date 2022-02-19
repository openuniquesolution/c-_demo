#include <iostream>

using namespace std;

int sum (int a, int b);

int main(int argc, char const *argv[])
{

    // Defining array
    int arr[] = {1,2,3};

    cout << arr[0];
    cout << "\n";
    cout << sum(3,5);
    cout << "\n";
    // undefined behavious 
    cout << arr[10];  // output can be anything
    return 0;
}


int sum(int a, int b) {
    return a+b;
}