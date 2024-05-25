#include <iostream>
using namespace std ;

class Demo
{
    public:
        int A;
        int B;
        Demo()
        {
            A = 0;
            B = 0;
            cout<<"Enter two values :-\n";
            cin>>A;
            cin>>B;
        }
        int Maximum()
        {
            int max = 0;
            if(A>B)
            {
                max  = A;
            }
            else
            {
                max = B;
            }
            return max;
        }
};

int main()
{
    int result = 0;
    Demo obj;
    result = obj.Maximum();
    cout<<result<<" is Maximum\n";
    return 0;
}