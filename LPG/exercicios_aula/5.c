#include <stdio.h>

void main()
{
    int n, soma = 0;
    scanf("%d", n);
    while (!n)
    {
        soma += n;
        scanf("%d", &n);
    }
    printf("\nSoma total: %d\n", soma);
}