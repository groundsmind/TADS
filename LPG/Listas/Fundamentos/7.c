#include <stdio.h>

#define CAMBIO_USD 5.16

void main()
{
    float usd;
    printf("Insira qtde. em dólar: US$");
    scanf("%f", &usd);
    printf("equivale a BRL%.2f\n", usd*CAMBIO_USD);
}