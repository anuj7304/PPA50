#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char Name[30];
    int fd = 0;

    printf("Enter Name of file that you want to delete : \n");
    scanf("%s",Name);

    unlink(Name);
    
    return 0;
}