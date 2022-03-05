#include<iostream>
#include<string>

using namespace std;
/**
 * Dimond Problem:
 *  This problem occur when there is same feild/method in multiple parent class.
 * then child is not able to understand to whom he call.
 * 
 * to overcome use 
 *  -Parent::feild/method syntak
 *  - Override feild/method.
 * 
 */
class Mother
{
    public:
        int a = 10;
        int k = 40;
};

class Father
{
    public:
         int b = 20;
         int k = 50;

};


class I : public Father, public Mother {
    public:
        int c = 30;
       
};

int main(int argc, char const *argv[])
{
   I i;
   cout << i.a << endl;
   cout << i.b << endl;
   cout << i.c << endl;
   cout << i.Father::k << endl;
    return 0;
}
