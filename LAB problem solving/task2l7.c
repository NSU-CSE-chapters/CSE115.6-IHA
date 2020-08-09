 //Name: Fahim Muntashir
//ID: 2021183642
//Course code: CSE115L
//Section: 06

#include<stdio.h>

int main()
{

    int month;
    printf("enter the month number: \n");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("%d  days in January month.\n", 31);
        break;
    case 2:
        printf("%d  days in February month.\n", 28);
        break;
    case 3:
        printf("%d  days in March month.\n", 31);
        break;
    case 4:
        printf("%d  days in April month.\n", 30);
        break;
    case 5:
        printf("%d  days in May month.\n",31);
        break;
    case 6:
        printf("%d  days in June month.\n", 30);
        break;
    case 7:
        printf("%d  days in July month.\n", 31);
        break;
    case 8:
        printf("%d  days in August month.\n", 31);
        break;
    case 9:
        printf("%d  days in September month.\n", 30);
        break;
    case 10:
        printf("%d  days in October month.\n", 31);
        break;
    case 11:
        printf("%d  days in November month.\n", 30);
        break;
    case 12:
        printf("%d  days in December month.\n", 31);
        break;

    default:
        printf("you entered a wrong number .\n");

    }

    return 0;

}




