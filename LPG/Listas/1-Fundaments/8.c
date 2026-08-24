#include <stdio.h>

#define PI 3.1415926

void main()
{
    float raio, altura;
    printf("raio: ");
    scanf("%f", &raio);
    printf("altura: ");
    scanf("%f", &altura);
    float volume = PI * raio*raio * altura;
    printf("volume: %.2f\n", volume);
}