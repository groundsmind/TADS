#include <stdio.h>
#include <stdlib.h>
#include "exp.h"
#include "fac.h"

/* sin x */
/*

    Não faço ideia do por quê não funciona :(

*/

void main() 
{
    double x;
    int iterations;

    printf("Insira número e quantidade de iterações: ");
    scanf("%lf %i", &x, &iterations);

    double soma = x;
    for (int i = 1; i <= iterations; i++)
    {
        soma += pow(-1.0, i) * pow(x, (2.0*i)+1.0) / fac((2.0*i)+1.0);
        printf("Iteração %i: %lf\n", i, soma);
    }

    printf("\nValor aproximado de sin(%.2lf): %lf", x, soma);

}