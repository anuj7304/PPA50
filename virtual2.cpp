#include <iostream>
using namespace std;

class Base
{
    public:
        int A,B;
        void Fun()                          //Defination
        {
            cout<<"Base Fun\n";
        }
        void Gun()                          //Defination
        {
            cout<<"Base Gun\n";
        }
        void Sun()                          //Defination
        {
            cout<<"Base Sun\n";
        }
};

class Derived : public Base
{
    public:
        int X,Y;
        void Gun()                          //Redefination
        {
            cout<<"Derived Gun\n";
        }
        void Sun()                          //Redefination
        {
            cout<<"Derived Sun\n";
        }
        void Run()                          //Defination
        {
            cout<<"Derived Run\n";
        }
};

int main()
{
    Base bobj;
    Derived dobj;

    Base *bp = NULL;
    Derived *dp = NULL;
    
    bp = &bobj;     //No casting
    dp = &dobj;     //No casting

    bp = &dobj;     //Upcasting
    dp = &bobj;     //Downcasting  (Not Allowed)

    return 0 ;
}