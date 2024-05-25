#include<stdio.h>

void Display(int No)        //Callee
{
    static int iCnt = 0;

    if(iCnt < No)
    {
        printf("Jay Ganesh..\n");
        iCnt ++;
        Display(No);            //Recursive call
    }
}

int main()              //Caller
{
    Display(3);
    printf("End of main\n");
    return 0;
}