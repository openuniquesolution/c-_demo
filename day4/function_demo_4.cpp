#include <iostream>

using namespace std;
 
 void swap(int &i, int &j){
    int temp = i;
     i = j;
     j = temp;
 }

int main(int argc, char const *argv[])
{
    int i = 10;
    int j = 20;
  
    swap(i,j);

    cout << i << endl;
    cout << j << endl;
    return 0;
}
