#include<stdio.h>

#pragma pack(1)
struct Student
{
    int rollno;      //4
    char division;   //1
    int age;         //4
    float marks;     //4
    int salary;      //4
};

int main()
{
    struct Student Amit;
    struct Student Pooja;

    printf("size of object is %d\n",sizeof(Amit));



    return 0;
}