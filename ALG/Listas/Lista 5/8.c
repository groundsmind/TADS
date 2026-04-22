#include <stdio.h>
#include <stdlib.h>
// deu overflow dai precisa fazer um int de 64 bit // 
#include <stdint.h>
#include <inttypes.h>

/*
Faça um algoritmo que gere os N primeiros elementos da série de Fibonacci,
armazene-os num vetor, e por fim mostre a série gerada. Nessa série, os dois primeiros
elementos são 1 e 1. A partir do terceiro, os elementos são gerados a partir da soma
dos dois anteriores. Por exemplo, numa série com N= 9, temos: (1, 1, 2, 3, 5, 8, 13,
21, 34). Defina um vetor com capacidade 50 e garanta que o usuário não entre com N
> 50
*/

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

    // array de int de 64bit
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
        // pelo jeito pode fazer isso ??
        printf("%" PRId64 "%c ", arr[i], comma);
    }
    exit(EXIT_SUCCESS);
}