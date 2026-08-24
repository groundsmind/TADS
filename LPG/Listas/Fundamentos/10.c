#include <stdio.h>

#define TEMPO_ANOS 3
#define TAXA_ANO 0.05

void main()
{
    double v_inicial;
    printf("Investimento: R$");
    scanf("%lf", &v_inicial);

    double v_final = v_inicial + (v_inicial*TAXA_ANO*TEMPO_ANOS);
    printf("valor final: R$%.2f", v_final);
}