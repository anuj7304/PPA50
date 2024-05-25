#include<stdio.h>

int main ()
{
    int Arr[] = {11,21,51,101,111,121};

    int *p = NULL;
    int *q = NULL;

    p = &(Arr[0]);
    q = &(Arr[4]);

    printf("%d\n",q-p);

    printf("%d\n",*p);
    printf("%d\n",*q);

    p = p+2;
    printf("%d\n",*p);

    q = q-2;
    printf("%d\n",*q);

    return 0;
}