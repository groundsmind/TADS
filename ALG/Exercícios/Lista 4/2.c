#include <stdio.h>
#include <stdlib.h>

/* ln(2) */

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
        if (i%2==0)
        {
            st -= termo;
        }
        else
        {
            st += termo;
        }
        /*
        printf("Termo %i: %f\n", i, termo);
        printf("Soma dos termos: %f\n", st);
        
        */
    }

    printf("\nSoma de todos os termos: %f\n\n", st);
}