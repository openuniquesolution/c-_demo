#include<iostream>
#include<string>

using namespace std;

class Demo2 // parent
{

public:
    int a = 22;
    int b = 200;

    protected:
        int c = 9;

    private:
        int i = 190;
};

class Demo3 : public Demo2 // child
{
    public:
        int k = c;
        int l = a;
};

int main(int argc, char const *argv[])
{
    Demo3 d;
    Demo2 d1;
    cout << d.a << endl;
    cout << d.k << endl;
    
    
    return 0;
}


