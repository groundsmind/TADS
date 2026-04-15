#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia 30 valores inteiros em um vetor e retorne a média dos
valores ímpares maiores que 10
*/

void main() 
{
    int arr_size = 30;
    int arr[arr_size];
    for (int i = 0; i < arr_size; i++)
    {
        printf("\nInsira %iº número: ", i);
        scanf("%i", &arr[i]);
    }

    int media_size = 0;
    int media = 0;
    for (int i = 0; i < arr_size; i++)
    {
        if ((arr[i]%2!=0) && (arr[i]>10))
        {
            media_size++;
            media += arr[i];
        }
    }

    printf("Média dos valores: %i", media);
}