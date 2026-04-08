#include <stdio.h>
#include <stdlib.h>

/* Série Harmônica */

void main() 
{
    int tc = 0;
    float st = 0;
    printf("Insira número de termos: ");
    scanf("%i", &tc);

    for (int i = 1; i <= tc; i++)
    {
        float j = i;
        float termo = 1/j;
        st += termo;
        printf("Termo %i: %f\n", i, termo);
    }

    printf("\nSoma de todos os termos: %f\n\n", st);
}