#include <stdio.h>
#include <stdlib.h>

float harms(int n)
{
    float num = 0.0;

    for (int i = 1; i <= n; i++)
    {
        num += 1.0/i;
    }

    return num;
}

void main()
{

    int n;
    printf("Insira número: ");
    scanf("%i", &n);

    float s = harms(n);
    
    printf("\nValor final: %f\n\n", s);
}