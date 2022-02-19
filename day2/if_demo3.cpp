#include <iostream>

int main(int argc, char const *argv[])
{
    int num = 10;

    if (num % 2 == 0)
    {
       num = num +1;
    }
    
    std::cout << num;
    return 0;
}
