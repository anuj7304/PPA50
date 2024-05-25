#include<stdio.h>

int x = 21;

extern int no;

extern void Marvellous();

int main()
{
    printf("Value of x is : %d\n",x);

    printf("Value of no is : %d\n",no);

    Marvellous();

    return 0;
}