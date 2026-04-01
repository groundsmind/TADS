#include <stdio.h>
#include <stdlib.h>

void main() 
{
    int intervalo[2];
    float temp;

    printf("Insira intervalo: ");
    scanf("%i %i", &intervalo[0], &intervalo[1]);

    for (int i = intervalo[0]; i<=intervalo[1]; i+=2) {
        temp = (i-32)*5/9;
        printf("%iºF = %.2fºC\n", i, temp);
    }
}