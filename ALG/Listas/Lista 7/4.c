#include <stdio.h>
#include <stdlib.h>

int is_prime(int p)
{
    if (p <= 1) return 0;

    for (int i=2; i*i <= p; i++)
    {
        if (p%i==0) return 0;
    }
    return 1;
}

void main()
{
    int k,n;
    printf("Insira dois números: ");
    scanf("%i %i", &k,&n);

    k++;
    for (int i = 0; i < n; i++)
    {
        if (is_prime(k))
        {
            printf("\n%i", k);
        }
        k++;
    }
    printf("\n\n");
}