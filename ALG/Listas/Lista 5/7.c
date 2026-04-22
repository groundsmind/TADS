#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que leia um vetor de tamanho 30. A seguir, inverta o vetor da
seguinte maneira: troque o primeiro elemento com o último, o segundo elemento com
o penúltimo, etc., até chegar ao meio do vetor. Defina a solução de maneira genérica,
de modo a funcionar para qualquer vetor de capacidade n. Por fim, mostre na tela o
vetor invertido
*/

void main() 
{
    int arr_size = 6;
    int arr[arr_size];
    
    for (int i = 0; i < arr_size; i++)
    {
        printf("Insira %iº número: ", i+1);
        scanf("%i", &arr[i]);
    }

    int half_size = arr_size / 2;
    int j = arr_size-1;

    for (int i = 0; i < half_size; i++)
    {
        arr[j] = arr[i] ^ arr[j];
        arr[i] = arr[j] ^ arr[i];
        arr[j] = arr[i] ^ arr[j];
        j--;
    }

    for (int i = 0; i < arr_size; i++)
    {
        printf("%i\n", arr[i]);
    }
}