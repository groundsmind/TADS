#include <stdio.h>
#include <stdlib.h>

void main()
{
    int w = 4;
    int h = 6;
    int n1[w][h];
    int n2[w][h];
    int m1[w][h];
    int m2[w][h];

    for (int x = 0; x<w; x++)
    {   for (int y=0; y<h; y++)
        {
            int temp;
            printf("[N1] Insira número na posição (%i, %i)", x, y);
            scanf("%i", &temp);
            n1[x][y] = temp;
        }

    }
    for (int x = 0; x<w; x++)
    {   for (int y=0; y<h; y++)
        {
            int temp;
            printf("[N2] Insira número na posição (%i, %i)", x, y);
            scanf("%i", &temp);
            n2[x][y] = temp;

            m1[x][y] = n1[x][y] + n2[x][y];
            m2[x][y] = n1[x][y] - n2[x][y];
        }
    }

    printf("\n\nMatriz M1: ");
    for (int x = 0; x<w; x++)
    {   printf("\n");
        for (int y=0; y<h; y++)
        {
            printf("%i ", m1[x][y]);
        }
    }
    printf("\n\nMatriz M2: ");
    for (int x = 0; x<w; x++)
    {   printf("\n");
        for (int y=0; y<h; y++)
        {
            printf("%i ", m2[x][y]);
        }
    }
}