#include<stdio.h>

int main()
{
    int a = 0, b = 0;
    printf("Enter two numbers:-\n");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("%d is Maximum",a);
    }
    else
    {
        printf("%d is Maximum",b);
    }
    return 0;
}