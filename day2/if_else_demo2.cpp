#include <iostream>

using namespace std;

/**
 * 
 *  +  --> Sum
 *  -  --> Substract
 *  *  --> multiply
 *  / --> divide
 *  % --> Mod ( Reminder)
 * 
 */
int main(int argc, char const *argv[])
{
    int num = 11;

    if (num % 2 == 0)
    {
        cout << "Even";
    }else{
        cout << "Odd";
    }
    
    return 0;
}
