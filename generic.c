#include<stdio.h>

int main()
{
    char ch = 'A';
    int i = 11;
    float f = 45.00;
    double d = 90.584628;

    char *cp = &ch;
    int * ip = &i;
    float *fp = &f;
    double *dp = &d;
    void *vp = NULL;

    printf("%c\n",*cp);
    printf("%d\n",*ip);
    printf("%f\n",*fp);
    printf("%f\n",*dp);

    vp = &ch;
    printf("%c\n",*(char *)vp);
    vp = &i;
    printf("%d\n",*(int *)vp);
    vp = &f;
    printf("%f\n",*(float *)vp);
    vp = &d;
    printf("%f\n",*(double *)vp);

    return 0;
}