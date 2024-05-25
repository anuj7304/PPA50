#include<stdio.h>

int main()
{
    int standard = 0;

    printf("Enter your standard ;\n");
    scanf("%d",&standard);
    
    switch(standard)
    {
        case 1 :
            printf("Your exam is at 7 am \n");
            break;
        case 2:
            printf("Your exam is at 8 am \n");
            break;
        case 3:
            printf("Your exam is at 9 am \n");
            break;
        case 4:
            printf("Your exam is at 10 am \n");
            break;
        default:
            printf("Wrong choice\n");
    }

    return 0; 
}