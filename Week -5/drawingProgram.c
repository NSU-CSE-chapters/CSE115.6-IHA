#include<stdio.h>

void RocketShip();
void MaleStick();
void femaleStick();
void Triangle();
void rectangle();
void circle();
void invertV();


int main()
{
    RocketShip();
    printf("\n\n");

    MaleStick();
    printf("\n\n");

    femaleStick();
    printf("\n\n");
}


void RocketShip()
{
    Triangle();
    rectangle();
    invertV();
}

void MaleStick()
{
    circle();
    rectangle();
    invertV();
}

void femaleStick()
{
    circle();
    Triangle();
    invertV();
}

void Triangle()
{
    printf("      *      \n ");
    printf("    *   *    \n ");
    printf("  *       *  \n ");
    printf(" * * * * * * \n");
}

void circle()
{
    printf("     * *    \n");
    printf("   *     *  \n");
    printf("   *     *  \n");
    printf("     * *    \n");
}

void rectangle()
{
    printf(" ************ \n");
    printf(" *          * \n");
    printf(" *          * \n");
    printf(" *          * \n");
    printf(" ************ \n");
}

void invertV()
{
  printf("      *      \n");
  printf("    *   *    \n");
  printf("   *     *   \n ");
  printf("  *       *  \n");
  printf(" *         * \n");
}