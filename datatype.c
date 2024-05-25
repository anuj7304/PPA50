#include<stdio.h>

 int main ()
 {
    char ch = 'A';
    int i = 99;
    float f = 89.99;
    double d = 90.895426;

    printf("%d \n",&ch);
    printf("%d \n",&i);
    printf("%d \n",&f);
    printf("%d \n",&d);

    printf("%d \n",sizeof(ch));
    printf("%d \n",sizeof(i));
    printf("%d \n",sizeof(f));
    printf("%d \n",sizeof(d));

    printf("%c \n",ch);
    printf("%d \n",i);
    printf("%f \n",f);
    printf("%f \n",d);

    return 0;
 }