#include<stdio.h>

int Multiplication(int No1 ,int No2)
{
    int Ans = 0;
    Ans = No1 * No2;
    return Ans;
}

int main()
{
    int num1 = 0;
    int num2 = 0, ans = 0;

    int (*fptr)(int , int);

    fptr = Multiplication;

    printf("Enter first number:\n");
    scanf("%d",&num1);

    printf("Enter second number:\n");
    scanf("%d",&num2);

    ans = fptr   (num1,num2);
    printf("Multiplication is %d\n",ans);

    return 0;
}