#include <stdio.h>

void main()
{
    int tx = 2;
    int ty = 2;
    int mtx[tx][ty];

    int mv[3];
    mv[0] = __INT_MAX__;

    for (int i = 0; i < ty; i++)
    {   for (int j = 0; j < tx; j++)
        {
            printf("%i\n", mv[0]);
            printf("Insira valor na posição (%i, %i): ", i+1, j+1);
            int val;
            scanf("%i", &val);
            mtx[i][j] = val;
            if (val < mv[0]) {mv[0] = val; mv[1]=j; mv[2]=i;}
        }
    }
    printf("\nMenor valor: %i na posição (%i, %i)", mv[0], mv[1]+1, mv[2]+1);
}