#include <stdio.h>
#include <stdlib.h>

int fibo(int n)
{
    int f = 0;
    int prev = 1;
    for (int i = 0; i < n; i++)
    {
        int temp = f + prev;
        prev = f;
        f = temp;
    }

    return f;
}

void main()
{
    int n;
    printf("Insira número: ");
    scanf("%i", &n);

    int s = fibo(n);
    
    printf("\nValor final: %i\n\n", s);
}