#include <stdio.h>

int main()
{
   
    float principle, rate, time, simpleInterest;

    printf("Enter Principle Amount: ");
    scanf("%f",&principle);

    printf("Enter Rate of interest: ");
    scanf("%f",&rate);

    printf("Enter Time: ");
    scanf("%f",&time);

    simpleInterest = (principle * rate * time) / 100;

    printf("Simple Interest = %.2f", simpleInterest);

    return 0;
}