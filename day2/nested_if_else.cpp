#include <iostream>

using namespace std;

/**
 *
 * Even / Odd
 *  20      25
 */
int main(int argc, char const *argv[])
{
    int num = 19;
    if (num % 2 ==0)
    {
       if (num > 20)
       {
           cout << "greater 20 even";
       }else{
        cout << "less 20 even";
       }
       
    }else{
        if (num > 25)
        {
            cout << "greater 25 odd";
            
        }else{
            cout << "less 25 odd";
        }
           
           
    }

    cout << "\nOutside if Else";
    
    return 0;
}
