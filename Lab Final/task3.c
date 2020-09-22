//Final Exam
//Task1
//Name: Fahim Muntashir
//ID: 2021183642
//Course code: CSE115L
//Section: 06

#include <stdio.h>
void lowestSalary(struct EmployeeInfo inf[], int size);

struct EmployeeInfo
{
    char name[20];
    int id;
    int salary;
};

int main()
{
    struct EmployeeInfo employee[4];

    for (int i = 0; i < 4; i++)
    {
        scanf("%s", employee[i].name);
        scanf("%d", &employee[i].id);
        scanf("%d", &employee[i].salary);
    }

    int searchId;
    printf("enter id of the employee : \n");

    scanf("%d", &searchId);

    int count = 0;

    for (int i = 0; i < 4; i++)
    {

        if (employee[i].id == searchId)
        {
            count = 1;
            break;
        }
    }

    int i;
    if (count == 1)
    {
        printf("the salary of the user is %d ", employee[i].salary);
    }
    else
    {
        printf("npot fount\n");
    }

    lowestSalary(employee, 4);
}

void lowestSalary(struct EmployeeInfo inf[], int size)
{

    int low = inf[0].salary;

    for (int i = 0; i < size; i++)
    {
        if (inf[i + 1].salary < low)
            low = inf[i].salary;
    }

    for (int i = 0; i < size; i++)
    {
        if (inf[i].salary == low)
            printf("lowest salary id and salary is %d and %d \n", inf[i].id, inf[i].salary);
    }
}