#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia um vetor de inteiros de capacidade 20, e mostre na tela a
quantidade de valores pares.
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

    int par = 0;
    for (int i = 0; i < arr_size; i++)
    {
        if (arr[i]%2==0)
        {
            par++;
        }
    }
    printf("\n\nQuantidade de valores par: %i\n", par);
}