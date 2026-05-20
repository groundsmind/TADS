#include <stdio.h>

void main()
{
    int tx = 5;
    int ty = 5;
    int mtx[tx][ty];

    int slq = 0;
    int scd = 0;
    int dpr = 0;
    int dsc = 0;
    int st  = 0;

    for (int i = 0; i < ty; i++)
    {   for (int j = 0; j < tx; j++)
        {
            printf("Insira valor na posição (%i, %i): ", i+1, j+1);
            int val;
            scanf("%i", &val);
            mtx[i][j] = val;

            st += val;
            if (i==4) {slq += val;}
            if (j==2) {scd += val;}
            if (i==j) {dpr += val;}
            if (i-j==tx-1) {dsc += val;}
        }
        printf("\n");
    }

    printf("\nSomas da linha 4: %i", slq);
    printf("\nSomas da coluna 2: %i", scd);
    printf("\nSomas da diagonal principal: %i", dpr);
    printf("\nSomas da diagonal secundaria: %i", dsc);
    printf("\nSomas de todos os elementos: %i", st);

}