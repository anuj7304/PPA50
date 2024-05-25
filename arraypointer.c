#include<stdio.h>

int main()
{
    int arr[5] ={10,20,30,40,50};
    int *p = arr;
    int *q = &(arr[2]);
    int *x = &(arr[0]);

    printf("%d\n",*p);
    printf("%d\n",*q);
    printf("%d\n",*x);

    return 0;
}