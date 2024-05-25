#include<stdio.h>

int x = 101;

void Marvellous()
{
    int i = 21;
    int no = 51;

    printf("From Marvellous value of  no is : %d\n",no);
    printf("From Marvellous value of  i is : %d\n",i);
    printf("From Marvellous value of  x is : %d\n",x);

}

int main()
{
    int no = 11;

    printf("From main value of  no is : %d\n",no);
    printf("From main value of  x is : %d\n",x);

    Marvellous();

    return 0;
}