#include <stdio.h>
#include <stdlib.h>

void main()
{
    int w = 5;
    int h = 5;
    int a[w][h];

    for (int y = 0; y<w; y++)
    {   for (int x=0; x<h; x++)
        {
            int temp;
            printf("[A] Insira número na posição (%i, %i)", x, y);
            scanf("%i", &temp);
            a[x][y] = temp;
        }
    }

    int max = 0;
    int l = 0;
    for (int y = 0; y<w; y++)
    {   for (int x=0; x<h; x++)
        {
            if (a[x][y] > max) {max=a[x][y]; l=x;}
        }
    }

    int b = INT_MIN;
    for (int y = 0; y<w; y++)
    {
        if (a[l][y] > b) {b=a[l][y];}
    }

    printf("Minimax: %i", b);
}