#include <stdio.h>

#define MOTO 1
#define CARRO 2 
#define CAMINHAO 3
#define ONIBUS 4

void main()
{
    int sel;
    printf("1 - Motocicelta\n2 - Carro\n3 - Caminhão\n4 - Ônibus\n");
    printf("digite o tipo de veículo:\n");
    scanf("%d", &sel);
    switch (sel)
    {
        case MOTO:
            printf("\nR$5.00\n");
            break;
        case CARRO:
            printf("\nR$12.50\n");
            break;
        case CAMINHAO:
            printf("\nR$25.00\n");
            break;
        case ONIBUS:
            printf("\nR$18.00\n");
            break;
        default:
            printf("\nSeleção incorreta\n");
            break;
    }

}