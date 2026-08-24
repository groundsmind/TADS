#include <stdio.h>

void main()
{
    int n, par, impar = 0;
    for (int i = 0; i<10; i++)
    {
        printf("Insira %dº número: ", i+1);
        scanf("%d", &n);
        if (n%2) impar += 1; else par += 1;
    }
    printf("\n%d Pares e %d Ímpares\n", par, impar);
}