#include <stdio.h>

void main()
{
    int tx = 5;
    int ty = 5;

    int mtx[tx][ty];

    int sl[tx];
    int sc[ty];

    for (int i = 0; i < ty; i++) {sl[i]=0; sc[i]=0;}

    for (int i = 0; i < ty; i++)
    {   for (int j = 0; j < tx; j++)
        {
            printf("Insira valor na posição (%i, %i): ", i+1, j+1);
            int val;
            scanf("%i", &val);
            mtx[j][i] = val;

            sl[i]+=val;
            if (j==0) {sc[j]+=val;}
        }
    }

    for (int i = 0; i < ty; i++)
    {   printf("| ");
        for (int j = 0; j < tx; j++)
        {
            printf("%i ", mtx[i][j]);
        }
        printf("|\n");
    }

    for (int i = 0; i < tx; i++)
    {
        printf("soma linha %i: %i\n", i+1, sl[i]);
    }
    for (int j = 0; j < ty; j++)
    {
        printf("soma coluna %i: %i\n", j+1, sc[j]);
    }
}