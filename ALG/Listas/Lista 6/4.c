#include <stdio.h>

void main()
{
    int tx = 5;
    int ty = 3;
    int mtx[tx][ty];

    int imp = 0;
    int par = 0;

    for (int i = 0; i < ty; i++)
    {   for (int j = 0; j < tx; j++)
        {
            printf("Insira valor na posição (%i, %i): ", i+1, j+1);
            int val;
            scanf("%i", &val);
            mtx[i][j] = val;

            if (val%2==0) {par++;}
            else {imp++;}
        }
    }

    printf("\nPar: %i", par);
    printf("\n%% de par: %i%%", par*100/25);
    printf("\n\nImpar: %i", imp);
    printf("\n%% de impar: %i%%", imp*100/25);
}