#include <stdio.h>
#include <stdlib.h>

void main()
{

    int n;
    printf("Insira número: ");
    scanf("%i", &n);

    int s = iter(n);
    
    printf("\nValor final: %i\n\n", s);
}

int iter(int n)
{
    int num = 0;
    for (int i = 1; i <= n; i++)
    {
        num += i;
    }

    return num;
}