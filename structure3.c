#include<stdio.h>

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

    Amit.rollno =11;
    Amit.division = 'A';
    Amit.marks = 90.45;
    Amit.age = 19;
    Amit.salary = 21000;

    Pooja.rollno = 21;
    Pooja.division = 'D';
    Pooja.marks = 93.67;
    Pooja.age = 20;
    Pooja.salary = 5000;

    printf("Age of Amit is %d\n",Amit.age);
    printf("Age of Pooja is %d\n",Pooja.age);

    printf("Salary of Amit is %d\n",Amit.salary);
    printf("Salary of Pooja is %d\n",Pooja.salary);

    return 0;
}