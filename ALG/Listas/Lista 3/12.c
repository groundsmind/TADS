#include <stdio.h>
#include <stdlib.h>

void main() 
{

    calc_pop();

}

void calc_pop()
{
    int pop_a, pop_b;
    float taxa_a, taxa_b;

    printf("Insira qtde de habitantes da população A, e sua taxa de crescimento anual: ");
    scanf("%i%f", &pop_a, &taxa_a);
    printf("Insira qtde de habitantes da população B, e sua taxa de crescimento anual: ");
    scanf("%i%f", &pop_b, &taxa_b);

    if (pop_a >= pop_b)
    {
        printf("População A já atingiu ou passou B!\n\n");
        calc_pop();
    }
    if (taxa_a < taxa_b)
    {
        printf("População A nunca vai alcançar B!\n\n");
        calc_pop();
    }

    int anos = 0;

    while (pop_a <= pop_b)
    {
        pop_a += pop_a*taxa_a;
        pop_b += pop_b*taxa_b;
        anos += 1;
    }

    printf("Cidade A demorou %i anos para ultrapassar cidade B", anos);
}