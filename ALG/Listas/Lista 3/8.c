#include <stdio.h>
#include <stdlib.h>

void main() 
{

    int n = 0;
    float i, r, p = 0.0;

    printf("Insira qtde de elementos e razão: ");
    scanf("%i%f", &n, &r);

    printf("Insira elemento inicial: ");
    scanf("%f", &i);

    for (int j=0; j<n; j++)
    {
        p = i+j*r;
        printf("%.1f\n", p);
    }

}