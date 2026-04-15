#include <stdio.h>
#include <stdlib.h>

/*
Elabore um algoritmo que leia um vetor com 20 inteiros e mostre na tela somente os
valores positivos.
*/

void main() 
{
    int arr_size = 20;
    int arr[arr_size];
    for (int i = 0; i < arr_size; i++)
    {
        printf("\nInsira %iº número: ", i);
        scanf("%i", &arr[i]);
    }
    printf("\n\nPositivos: ");
    for (int i = 0; i < arr_size; i++)
    {
        if (arr[i]<0)
        {
            printf("%i, ", arr[i]);
        }
    }
}