#include <iostream>

using namespace std;


/**
 * There are four parts of function.
 * 
 * 1. return type
 * 2. Name (cameCasing)
 * 3. Perameter
 * 4. body (return)
 */

string printWelcomemessage() {
    return "Ayush this is a class for Function and we are";
}

int main()
{

    string message = printWelcomemessage(); // char[]
    cout << message;
    int i = 20; 
    int j = 40;
    int k = i+j;
    cout << k;

    printWelcomemessage();

    return 0;
}
