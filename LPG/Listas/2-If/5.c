#include <stdio.h>

void main()
{
    int idade;
    scanf("%d", &idade);
    if (idade>18)
    {
        if (idade>65)
        {
            printf("Eleitor facultativo");
        } else
        {
            printf("Eleitor obrigatório");
        }
    } else {
        printf("Não eleitor");
    }
}