#include<stdio.h>

void Marvellous()
{
    int i = 11;
    auto int j = 21;
    auto int k;

    printf("%d\n",k);
    printf("%d\n",&k);
}

int main ()
{
    printf("Demonstration of auto storage class...\n");

    Marvellous();

    return 0;
}