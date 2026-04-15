#include <stdio.h>
#include <stdlib.h>

void main() 
{

    int qtde = 0;
    float total = 0; 

    printf("Insira qtde de valores: ");
    scanf("%i", &qtde);

    for (int j=0; j<qtde; j++)
    {
        float val = 0;
        printf("\nInsira %iº valor: ", j+1);
        scanf("%f", &val);

        total += val;
    }

    printf("\nSoma total: %.01f\n", total);

}