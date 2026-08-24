#include <stdio.h>

#define TX_REP 0.2
#define TX_IMP 0.3

void main()
{
    double valor;
    printf("R$");
    scanf("%lf", &valor);
    double valor_final = valor * (1+TX_REP) * (1+TX_IMP);
    printf("Valor total: R$%.2f", valor_final);
}