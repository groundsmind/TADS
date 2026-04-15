#include <stdio.h>
#include <stdlib.h>
#include "fac.h"

/* E */

void main() 
{
    int termos = 0;

    printf("Insira qtde de termos: ");
    scanf("%i", &termos);

    double soma = 0;
    for (int i=0; i<=termos; i++)
    {
        soma += 1/(double)fac(i);
    }

    printf("\nValor aproximado de e: %f\n\n", soma);
}