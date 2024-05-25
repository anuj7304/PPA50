#include<stdio.h>

int main()
{
    int standard = 0;
    
    printf("Enter your standard ; \n");
    scanf("%d",&standard);

    if (standard == 1)
    {
        printf("Your exam is at 7 am\n");
    }
    else if(standard == 2)
    {
        printf("Your exam is at 8 am\n");
    }
    else if (standard == 3)
    {
        printf("Your exam is at 9 am\n");
    }
    else if (standard == 4)
    {
        printf("Your exam is at 10am\n");
    }
    else
    {
        printf("Wrong Standard");
    }
    return 0;
}