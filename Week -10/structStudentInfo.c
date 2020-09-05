#include<stdio.h>


struct student
{
    char name[50];
    int roll;
    int marks;
};

typedef struct student Student;

int main()
{

    Student s;

    printf("Enter information: \n");

    printf("enter name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("enter roll number: ");
    scanf("%d", &s.roll);

    printf("enter marks: ");
    scanf("%d", &s.marks);


    printf("\n display info:\n");

    printf("name: %s\n", s.name);
    printf("roll: %d\n", s.roll);
    printf("marks : %d\n", s.marks);


}