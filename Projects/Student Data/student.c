#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void heading();
void mainMenu();
void addStudent();
void viewStudent();
void deleteStudent();
void editStudent();
void searchStudent();

int count = 0;

struct Student
{
    int id;
    char name[20];
    int roll;
};
struct Student student;

int main()
{
    heading();

    mainMenu();
}

void heading()
{
    printf("************ Student Data ************\n\n");
}

void mainMenu()
{
    printf("1. add student\n");
    printf("2. view student\n");
    printf("3. delete student\n");
    printf("4. edit student\n");
    printf("5. search student\n");
    printf("6. exit student\n");

    printf("\nenter your choice \n");

    int count;
    scanf("%d", &count);

    if (count == 1)
    {
        addStudent();
    }
    else if (count == 2)
    {
        viewStudent();
    }
    else if (count == 3)
    {
        // deleteStudent();
    }
    else if (count == 4)
    {
        // editStudent();
    }
    else if (count == 5)
    {
        // searchStudent();
    }
    else if (count == 6)
    {
        printf("wait.....\n");
        sleep(2);
    }
}

void addStudent()
{
    system("clear");
    printf("***********Add Student***********");
    printf("\n\n");
    printf("enter id :\n");
    fflush(stdin);
    scanf("%d", &student.id);
    fflush(stdin);
    printf("enter name: \n");
    scanf("%s", student.name);
    printf("enter roll : \n");
    fflush(stdin);
    scanf("%d", &student.roll);

    count++;
    fflush(stdin);
    getchar();
    mainMenu();
}

void viewStudent()
{
    system("clear");

    printf("***********View Student***********\n\n");

    for (int i = 0; i < count; i++)
    {
        printf("id : %d\n", student.id);
        printf("name : %s\n", student.name);
        printf("roll : %d\n", student.roll);
        printf("***************************\n");
    }

    fflush(stdin);
    getchar();
    fflush(stdin);

    // system("clear");

    // mainMenu();
}