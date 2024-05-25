#include<iostream>
using namespace std;

class Demo
{
    public:
        int No1,No2;               //non static characteristics
        static int X;              // static characteristics

        Demo()
        {
            No1 = 10;
            No2 = 20;
        }
        void Fun()                            // non static behaviour
        {
            cout<<"Inside Fun\n";
            cout<<No1<<"\n";
            cout<<X<<"\n";
        }
        static void Gun()                     // static behaviour
        {
            cout<<"Inside Gun\n";
            cout<<X<<"\n";
        }
};
int Demo :: X = 11;

int main()
{
    cout<<"Value of X is : "<<Demo::X<<"\n";
    Demo::Gun();

    Demo obj1;
    Demo obj2;

    cout<<"Size of object is : "<<sizeof(obj1)<<"\n";
    cout<<obj1.No1<<"\t"<<obj1.No2<<"\n";
    cout<<obj2.No1<<"\t"<<obj2.No2<<"\n";

    obj1.Fun();
    obj2.Fun();

    obj1.Gun();
    cout<<"Value of X using object is : "<<obj1.X<<"\n";

    return 0;
}