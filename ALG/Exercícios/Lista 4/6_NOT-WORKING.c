#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/* sin x */

void main() 
{

    double x;
    int iters;

    printf("Insira número e quantidade de iterações: ");
    scanf("%lf %i", &x, &iters);

    unsigned long long soma = x;
    for (int i = 1; i < iters; i++)
    {
        soma += pow(-1.0, (double)i) * pow(x, (2.0*(double)i)+1.0) / tgamma((2.0*(double)i+1.0)+1);
    }

    printf("Valor aproximado de sin(%.2lf): %lf", x, soma);

}