#include <iostream>

using namespace std;

void editValue(int a){
    a = a + 10;
}

void editRefrence(int &a){
    a = a +1;
}

int main(int argc, char const *argv[])
{
    int i = 10;
    int j = 20;
    editValue(i);
    editRefrence(j);
    cout << i << endl;
    cout << j << endl;
    return 0;
}
