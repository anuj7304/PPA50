# include<iostream>
using namespace std;

int main()
{
    int no = 11;
    int &x = no;

    cout<<no<<"\n";
    cout<<x<<"\n";

    cout<<&no<<"\n";
    cout<<&x<<"\n"; 

    return 0;
}