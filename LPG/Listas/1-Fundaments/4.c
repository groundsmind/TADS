#include <stdio.h>

void main()
{
    int idade, peso;
    char tipo;
    printf("Insira peso do pet: ");
    scanf("%d", &peso);
    printf("Insira idade do pet: ");
    scanf("%d", &idade);
    printf("Insira espécie (c/g ; cachorro, gato) do pet: ");
    scanf(" %c", &tipo);

    if (tipo=='c')
    {
        printf("\nUm cachorro ");
    } else if (tipo=='g')
    {
        printf("\nUm gato ");
    }

    printf("de %d anos que pesa %dkg.", idade, peso);
}