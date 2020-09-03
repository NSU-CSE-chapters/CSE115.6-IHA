//Name: Fahim Muntashir
//ID: 2021183642
//Course code: CSE115L
//Section: 06

#include <stdio.h>

int main()
{

    char str[100][100];
    char temp[100];
    int n = 3;

    for (int i = 0; i < n; i++)
    {

        gets(str[i]);
    }

    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }

    for (int i = 0; i < n; i++)
        puts(str[i]);
    return 0;
}