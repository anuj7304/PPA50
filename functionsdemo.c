#include<stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0, ans = 0;

    printf("Enter first number:\n");
    scanf("%d",&num1);

    printf("Enter second number:\n");
    scanf("%d",&num2);

    ans = num1*num2;
    printf("Multiplication is %d\n",ans);

    return 0;
}