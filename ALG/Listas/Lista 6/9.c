#include <stdio.h>
#include <stdlib.h>

void main()
{
    int w = 6;
    int h = 6;
    int a[w][h];
    int b[h][w];
    int c[h][h];
    int Amtx_X = 0;
    int Amtx_Y = 0;
    int Bmtx_X = 0;
    int Bmtx_Y = 0;

    Amtx_X, Amtx_Y, Bmtx_X, Bmtx_Y = getMatrixSize();

    for (int y = 0; y<Amtx_Y; y++)
    {   for (int x=0; x<Amtx_X; x++)
        {
            int temp;
            printf("[A] Insira número na posição (%i, %i)", x, y);
            scanf("%i", &temp);
            a[x][y] = temp;
        }

    }

    for (int y = 0; y<Bmtx_Y; y++)
    {   for (int x=0; x<Bmtx_X; x++)
        {
            int temp;
            printf("[B] Insira número na posição (%i, %i)", x, y);
            scanf("%i", &temp);
            b[x][y] = temp;
        }
    }

    for (int y = 0; y<Bmtx_Y; y++) { for (int x=0; x<Amtx_X; x++) { for (int z=0; z<Amtx_X; z++)
            {
                c[x][y] = a[z][0]*b[0][z];
            }
        }
    }

    printf("\n\nMatriz final: ");
    for (int x = 0; x<Bmtx_Y; x++)
    {   printf("\n");
        for (int y=0; y<Amtx_X; y++)
        {
            printf("%i ", c[x][y]);
        }
    }

}

int getMatrixSize()
{
    int ax = 1; int ay = 1;
    int bx = 1; int by = 1;

    printf("Insira tamanho da matriz A (escreva: x y)\n");
    scanf("%i %i\n", ax, ay);
    printf("Insira tamanho da matriz A (escreva: x y)\n");
    scanf("%i %i\n", bx, by);

    while (ay != bx)
    {
        printf("\nA(Y) deve ser igual a B(X)!");
        printf("Insira tamanho da matriz A (escreva: x y)\n");
        scanf("%i %i\n", ax, ay);
        printf("Insira tamanho da matriz A (escreva: x y)\n");
        scanf("%i %i\n", bx, by);
    }

    return ax, ay, bx, by;
}