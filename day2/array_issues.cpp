#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    // Defining array
    int arr[] = {1,2,3};

    cout << arr[0];

    cout << "\n";
    // undefined behavious 
    cout << arr[10];  // output can be anything
    return 0;
}