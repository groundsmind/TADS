#include <stdio.h>
#include <stdlib.h>

/* pi */

float gl(int t)
{
    float pi = 0;
    float ng = 0;
    for (int i = 1; i <= t; i++)
    {
        if (i%2 == 0)
        {
            continue;
        }

        float j = i;
        if (ng == 1)
        {
            pi -= 4/j;
            ng = 0;
        }
        else
        {
            pi += 4/j;
            ng = 1;
        }
    }

    return pi;
}

float nk(int t)
{
    float soma = 0.0;
    int ng = 0;
    for (int i = 1; i <= t; i++)
    {
        if (i == 1)
        {
            soma += 3;
            continue;
        }

        if (ng == 1)
        {
            soma -= 4/(i*(i+1)*(i+2));
            ng = 0;
        }
        else
        {
            soma -= 4/(i*(i+1)*(i+2));
            ng = 1;
        }
        i+=1;
    }

}

void calc_pi()
{
    int termos, forma = 0;
    printf("Insira qtde de termos: ");
    scanf("%i", &termos);
    printf("\nInsira forma (1: Gregory-Leibniz, 2: Nilakantha): ");
    scanf("%i", &forma);

    float pi;
    if (forma = 1)
    {
        pi = gl(termos);
    }
    else if (forma = 2)
    {
        pi = nk(termos);
    }
    else
    {
        printf("\n%i não é uma forma válida.");
        calc_pi();
    }

    printf("\nApprox. de pi: %f\n", pi);

}

void main() 
{
    calc_pi();
}
