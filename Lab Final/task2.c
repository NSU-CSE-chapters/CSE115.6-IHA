//Final Exam
//Task1
//Name: Fahim Muntashir
//ID: 2021183642
//Course code: CSE115L
//Section: 06

#include <stdio.h>

void stringInfo(char *s);

int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);

    stringInfo(str);
}

void stringInfo(char *s)
{
    int count = 0;
    int vowel = 0, consonants = 0;
    int digit = 0, space = 0;

    while (*s != '\0')
    {
        count++;

        if (*s == 'A' || *s == 'E' || *s == 'I' || *s == 'O' || *s == 'U' || *s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u')
        {
            vowel++;
        }
        if (*s == ' ')
        {
            space++;
        }
        if (*s == '1' || *s == '2' || *s == '3' || *s == '4' || *s == '5' || *s == '6' || *s == '7' || *s == '8' || *s == '9' || *s == '0')
        {
            digit++;
        }

        else
        {
            consonants++;
        }
        s++;
    }

    printf("Length: %d\n", count);
    printf("Vowels: %d\n", vowel);
    printf("Consonants: %d\n", consonants - (digit + space));
}