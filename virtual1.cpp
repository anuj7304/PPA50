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

    bobj.Fun();     //Base Fun
    bobj.Gun();     //Base Gun
    bobj.Sun();     //Base Sun

    dobj.Fun();     //Base Fun
    dobj.Gun();     //Derived Gun
    dobj.Sun();     //Derived Sun
    dobj.Run();     //Derived Run

    return 0 ;
}