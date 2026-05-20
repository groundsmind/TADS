#include <stdio.h>

void main()
{
    int tx = 5;
    int ty = 5;
    int mtx[tx][ty];

    for (int i = 0; i < tx; i++)
    {   for (int j = 0; j < ty; i++)
        {
            printf("Insira valor na posição (%i, %i)", i, j);
            scanf("%i", &mtx[i][j]);
        }
    }
}