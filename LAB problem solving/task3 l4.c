 //Name: Fahim Muntashir
//ID: 2021183642
//Course code: CSE115L
//Section: 06


#include <stdio.h>

int main()

{
    int amount, note;
    printf("Input the amount: ");
    scanf("%d", &amount);

    note = (int)amount / 100;

    printf("There are: \n");

    printf("%d note(s) of 100.00\n", note);

    amount = amount - (note * 100);

    note = (int)amount / 50;

    printf("%d note(s) of 50.00\n", note);

    amount = amount - (note * 50);

    note = (int)amount / 20;

    printf("%d note(s) of 20.00\n", note);

    amount = amount - (note * 20);

    note = (int)amount / 10;

    printf("%d Note(s) of 10.00\n", note);

    amount = amount - (note * 10);

    note = (int)amount / 5;

    printf("%d Note(s) of 5.00\n", note);

    amount = amount - (note * 5);

    note = (int)amount / 2;

    printf("%d Note(s) of 2.00\n", note);

    amount = amount - (note * 2);

    note = (int)amount / 1;

    printf("%d Note(s) of 1.00\n", note);
}