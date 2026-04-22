#include <stdio.h>
#include <stdlib.h>

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