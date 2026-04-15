#include <stdio.h>
#include <stdlib.h>
#include "fac.h"
#include "exp.h"

/* e^x */

void main() 
{
    int termos, expoente = 0;
    printf("Insira expoente: ");
    scanf("%i", &expoente);
    printf("Insira qtde de termos: ");
    scanf("%i", &termos);

    double soma = 0;
    for (int i=0; i<=termos; i++)
    {
        printf("%f\n", soma);
        soma += (double)pow(expoente,i)/(double)fac(i);
    }

    printf("Valor aproximado de e^%i: %f", expoente, soma);
}