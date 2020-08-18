//Name: Fahim Muntashir
//ID: 2021183642
//Course code: CSE115L
//Section: 06

#include <stdio.h>
void print_digits_reversed(int x);

int main()
{

    int num, reverseNum;

    printf("enter any number : ");
    scanf("%d", &num);

     print_digits_reversed(num);

   

    return 0;
}

void print_digits_reversed(int x)
{
   int rem;

    if (x == 0)
    {
        return ;
    }

    else
    {
        rem = x % 10;
        printf("%d", rem);
        print_digits_reversed(x/10); 
    }
}
