#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    
    for(int j = 0; j < 5; j++){
        for (int i = 0; i < 5-j; i++)  // row
        {
            cout <<"*";
        }
        cout << "\n";
    }

    cout << "\n\n\n";

    for(int j = 0; j < 4; j++){
        for (int i = 0; i <= j; i++)  // row
        {
            cout <<"*";
        }
        cout << "\n";
    }

    
    return 0;
}
