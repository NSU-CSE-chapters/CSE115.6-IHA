//Name: Fahim Muntashir
//ID: 2021183642
//Course code: CSE115L
//Section: 06

#include <stdio.h>
struct Student
{
    char Name[50];
    int ID;
    float CGPA;
};

int main()
{
    struct Student stu[3];

    for (int i = 0; i < 3; i++)
    {
        printf("%d student : \n", i + 1);
        gets(stu[i].Name);
        scanf("%d", &stu[i].ID);
        scanf("%f", &stu[i].CGPA);
    }
    int least = stu[0].CGPA;
    for (int i = 0; i < 3; i++)
    {
        if (&stu[i].CGPA < least)
        {
            least = &stu[i].CGPA;
        }
    }

    printf("least cgpa is %f\n", least);

    printf(" name : %s\n", stu[least].Name);
    printf(" id : %d\n", stu[least].ID);
    printf(" cgpa : %f\n", stu[least].CGPA);
}