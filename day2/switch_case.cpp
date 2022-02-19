#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num = 1111;

// a == b
    switch (num / 10)
    {
    case 1:
        cout << "10\n";
        break;
    case 2:
        cout << "20\n";
        break;
    case 3:
        cout << "30\n";
        break;
    case 4:
        cout << "40\n";
        break;
    case 5:
        cout << "50\n";
        break;
    case 6:
        cout << "60\n";
        break;
    case 7:
        cout << "70\n";
        break;
    case 8:
        cout << "80\n";
        break;
    case 9:
        cout << "90\n";
        break;  
    default:
        cout << "100 +";
    }

    return 0;
}
