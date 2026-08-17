#include <stdio.h>

void main()
{
    float fahrenheit, celsius;
    printf("Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = 5 * (fahrenheit-32) / 9;
    printf("%.2fºF equivalem a %.2fºC.\n", fahrenheit, celsius);
}