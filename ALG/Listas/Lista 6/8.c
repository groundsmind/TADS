#include <stdio.h>
#include <stdlib.h>

void main()
{
    int w = 3;
    int h = 4;
    int a[w][h];
    int b[h][w];
    int c[h][h];

    for (int y = 0; y<w; y++)
    {   for (int x=0; x<h; x++)
        {
            int temp;
            printf("[A] Insira número na posição (%i, %i)", x, y);
            scanf("%i", &temp);
            a[x][y] = temp;
        }

    }

    for (int y = 0; y<h; y++)
    {   for (int x=0; x<w; x++)
        {
            int temp;
            printf("[B] Insira número na posição (%i, %i)", x, y);
            scanf("%i", &temp);
            b[x][y] = temp;
        }
    }

    for (int y = 0; y<h; y++) { for (int x=0; x<h; x++) { for (int z=0; z<h; z++)
            {
                c[x][y] = a[z][0]*b[0][z];
            }
        }
    }
}