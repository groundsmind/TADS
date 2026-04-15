#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que leia um vetor de capacidade 30. Substitua, a seguir, todos
os valores 0 deste vetor por 1 e mostre o vetor na tela.
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

    for (int i = 0; i < arr_size; i++)
    {
        if (arr[i]==0)
        {
            arr[i] = 1;
        }
    }
    printf("\n\n");
    for (int i = 0; i < arr_size; i++)
    {
        printf("%i, ", arr[i]);
    }
}