#include <stdio.h>
#include <stdlib.h>

int soma_especial(int n, int k, int x)
{
    int f = 0;
    
    int cont = 0;
    while (cont < n)
    {
        if (x%k == 0)
        {
            f+=x; 
            printf("\n%i é multiplo de %i! total: %i", x,k,f);
            cont++;
        }
        x++;
    }

    return f;
}

void main()
{
    int n,k,x;
    printf("Insira três números: ");
    scanf("%i %i %i", &n, &k, &x);

    int s = soma_especial(n,k,x);
    
    printf("\nValor final: %i\n\n", s);
}