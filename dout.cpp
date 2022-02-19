#include<iostream>

using namespace std;
int main()
{
    
char lfc [20];
int i;


for(i = 0; i<10; i++)
    *(lfc + i) = 65 + i;

*(lfc + i) = ' ';  //10
cout<<lfc;

char demo[] = "greeting";


return(0);

}

