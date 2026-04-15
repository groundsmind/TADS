#include <stdio.h>
#include <stdlib.h>

void main() 
{

    int populacao_a = 90000;
    float taxa_a = 0.03;
    int populacao_b = 200000;
    float taxa_b = 0.015;

    int anos = 0;

    while (populacao_a <= populacao_b)
    {
        populacao_a += populacao_a*taxa_a;
        populacao_b += populacao_b*taxa_b;
        anos += 1;
    }

    printf("Cidade A demorou %i anos para ultrapassar cidade B", anos);

}