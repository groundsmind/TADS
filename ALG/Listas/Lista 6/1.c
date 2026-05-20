#include <stdio.h>
#include <stdlib.h>

void main()
{
    int tx = 5;
    int ty = 6;
    int mtx[tx][ty];

    float md = 0;
    int qt = 0;

    for (int i = 0; i < tx; i++)
    {   for (int j = 0; j < ty; j++)
        {
            printf("Insira valor na posição (%i, %i): ", j+1, i+1);
            int val;
            scanf("%i", &val);
            mtx[j][i] = val;
            if (val % 2 == 0) {md+=val; qt++;}
        }
    }

    md = md/qt;

    for (int i = 0; i < tx; i++)
    {   printf("| ");
        for (int j = 0; j < ty; j++)
        {
            printf("%i ", mtx[j][i]);
        }
        printf("|\n");
    }
    printf("\nMédia dos valores: %.2f", md);
}