#include <stdio.h>

struct student
{
    char name[20];
    int roll;
    int marks;
};

typedef struct student Student;

int main()
{

    int n;
    printf("how many students you want to add: \n");
    scanf("%d", &n);
    Student s[n];

    for (int i = 0; i < n; i++)
    {
        printf("for roll number %d: \n", i + 1);

        printf("enter name: ");
        scanf("%s", s[i].name);

        printf("enter marks: ");
        scanf("%d", &s[i].marks);
    }

    for (int i = 0; i < n; i++)
    {
        printf("\nRoll number: %d\n", i + 1);
        printf(" name: ");
        puts(s[i].name);
        printf("marks: %d", s[i].marks);
        printf("\n");
    }
    return 0;
}