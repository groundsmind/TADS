#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>

void main() 
{
    fibonacci();
}

void fibonacci()
{
    int arr_size = 2;
    printf("Insira tamanho do array (menor que 50): ");
    scanf("%i", &arr_size);

    if (arr_size >= 50)
    {
        printf("Valor deve ser menor que 50!\n");
        fibonacci();
    }

    uint64_t arr[arr_size];
    arr[0] = arr[1] = 1;
    
    for (int i = 2; i < arr_size; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }

    printf("\n\nSequência de fibonacci com N = %i:\n", arr_size);
    for (int i = 0; i < arr_size; i++)
    {
        char comma = ',';
        if (i==arr_size-1) {comma = ' ';}
        printf("%" PRId64 "%c ", arr[i], comma);
    }
    exit(EXIT_SUCCESS);
}