//Name: Fahim Muntashir
//ID: 2021183642
//Course code: CSE115L
//Section: 06

#include <stdio.h>
void strReverse(char *str);

int main()
{
    char str[100];

    printf("enter  string = ");
    gets(str);

    strReverse(str);
    printf("reverse : %s\n", str);
    return 0;
}

void strReverse(char *str)
{
   
    int length = strlen(str);
    char *first=str, *last=str, temp;


    for (int i = 0; i < length - 1; i++)
        last++;
    for (int i = 0; i < length / 2; i++)
    {
        temp = *last;
        *last = *first;
        *first = temp;

        first++;
        last--;
    }
}