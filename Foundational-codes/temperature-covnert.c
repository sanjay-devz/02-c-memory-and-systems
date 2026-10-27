#include <stdio.h>

int main()
{

    float celcius, faherenheit;

    printf("Enter temperature in celsius: ");
    scanf("%f",&celcius);

    faherenheit = (celcius * 9/5) + 32;

    printf("Temperture in faherenheit = %.2f",faherenheit);

    return 0;

}