#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que leia dois vetores de capacidade 10 e faça a multiplicação
dos elementos de mesmo índice, colocando os resultados em um terceiro vetor.
Mostre o vetor resultante
*/

void main() 
{
    int arr_size = 10;
    int arr1[arr_size];
    for (int i = 0; i < arr_size; i++)
    {
        printf("\nInsira %iº número: ", i);
        scanf("%i", &arr1[i]);
    }
    printf("\n\n");
    int arr2[arr_size];
    for (int i = 0; i < arr_size; i++)
    {
        printf("\nInsira %iº número: ", i);
        scanf("%i", &arr2[i]);
    }
    printf("\n\n");
    int arr3[arr_size];
    for (int i = 0; i < arr_size; i++)
    {
        arr3[i] = arr1[i]*arr2[i];
        printf("%i, ", arr3[i]);
    }
}