#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia 30 números em um vetor. Em seguida, deve informar:
● a média de todos os valores;
● quais valores estão acima da média, e suas respectivas posições;
● quantos estão acima da média;
● a soma dos números acima da média;
● a porcentagem dos números acima da média em relação ao total de números
*/

void main() 
{
    int arr_size = 30;
    int n[arr_size];
    
    for (int i = 0; i < arr_size; i++)
    {
        printf("Insira %iº número: ", i+1);
        scanf("%i", &n[i]);
    }

    /* Tirar média */
    double media = 0.0;
    for (int i = 0; i < arr_size; i++)
    {
        media += n[i];
    }
    media = media/arr_size;
    printf("\n\nMédia dos valores: %.2lf\n\n", media);
    /*             */

    /* nºs acima da média */
    int qtde_acima_media = 0;
    int soma_valores_media = 0;
    printf("Valores acima da média:\n");
    for (int i = 0; i < arr_size; i++)
    {
        if ((double)n[i] > media)
        {
            qtde_acima_media += 1;
            soma_valores_media += n[i];
            printf("%i, na posição %i\n", n[i], i);
        }
    }
    printf("\npara um total de %i valores acima da média, ", qtde_acima_media);
    printf("com a soma deles sendo %i, ", soma_valores_media);
    printf("e a porcentagem de valores acima da média sendo %.2lf%%\n\n", ((double)qtde_acima_media/(double)arr_size)*100);
    /*                    */
}