// converts distance in miles to kms


#include<stdio.h>

int main(){
    float miles, kms;

    printf("Enter distance in miles: ");
    scanf("%f", &miles);

    kms = 1.609*miles;

    printf("that equals %f kilometers\n", kms);

    return 0;
}