#include <stdio.h>
#include <stdlib.h>

void main() 
{

    int qtde = 0; 
    float arr, harm = 0;

    printf("Insira qtde de valores: ");
    scanf("%i", &qtde);

    for (int i = 0; i<qtde; i++)
    {
        float val = 0.0;
        printf("Insira %iº valor: ", i+1);
        scanf("%f", &val);

        arr += val;
        harm += 1/val;
    }

    arr = arr/5;
    harm = 5/harm;

    printf("\nMédia aritmética: %.1f\nMédia harmônica: %.1f\n", arr, harm);

}