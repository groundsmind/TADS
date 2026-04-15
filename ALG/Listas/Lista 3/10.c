#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void main() 
{

    int qtde = 0;

    printf("insira qtde: ");
    scanf("%i", &qtde);

    char respostas[qtde][2];
    int tot_s, tot_n = 0;
    float perc_f, perc_m = 0;
    int f, m = 0;

    for (int i=0; i<qtde; i++)
    {
        printf("Insira sexo (m/f) e resposta (s/n): ");
        scanf("%c %c", &respostas[i][0], &respostas[i][1]);

        if (toupper(respostas[i][0]) == 'M')
        {
            m += 1;
            if (toupper(respostas[i][1]) == 'N')
            {
                perc_m += 1;
            }
        }
        else
        {
            f += 1;
            if (toupper(respostas[i][1]) == 'S')
            {
                perc_f += 1;
            }
        }

        if (toupper(respostas[i][1]) == 'N')
        {
            tot_n += 1;
        }
        else
        {
            tot_s += 1;
        }
    }

    perc_f = perc_f/f;
    perc_m = perc_m/m;

    printf("Total sim: %i", tot_s);
    printf("Total não: %i", tot_n);
    printf("Porcentagem F sim: %.01f", perc_f);
    printf("Porcentagem M não: %.01f", perc_m);

}