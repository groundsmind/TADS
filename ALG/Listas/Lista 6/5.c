#include <stdio.h>

void main()
{
    int tx = 3;
    int ty = 2;
    int mtxA[tx][ty];
    int mtxB[tx][ty];
    int mtxC[tx][ty];

    for (int i = 0; i < ty; i++)
    {   for (int j = 0; j < tx; j++)
        {
            printf("[A] Insira valor na posição (%i, %i): ", i+1, j+1);
            int val;
            scanf("%i", &val);
            mtxA[i][j] = val;
        }
    }

    for (int i = 0; i < ty; i++)
    {   for (int j = 0; j < tx; j++)
        {
            printf("[B] Insira valor na posição (%i, %i): ", i+1, j+1);
            int val;
            scanf("%i", &val);
            mtxB[i][j] = val;

            if (i<=j) {mtxC[i][j] = mtxA[i][j];}
            else      {mtxC[i][j] = mtxB[i][j];}
        }
    }

    for (int i = 0; i < ty; i++)
    {   printf("| ");
        for (int j = 0; j < tx; j++)
        {
            printf("%i ", mtxC[i][j]);
        }
        printf("|\n");
    }
}