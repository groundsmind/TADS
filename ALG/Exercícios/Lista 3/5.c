#include <stdio.h>
#include <stdlib.h>

void main() 
{

    int n, s = 0;

    printf("Insira número: ");
    scanf("%i", &n);

    for (int i=1; i<=n; i++) {
        if (n%i == 0) {
            s+=i;
        }
    }
    
    if (s/2==n) {
        printf("%i é perfeito", n);
    } else {
        printf("%i não é perfeito", n);
    }

}