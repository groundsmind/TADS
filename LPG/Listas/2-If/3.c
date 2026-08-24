#include <stdio.h>

void main()
{
    int qtde_maca;
    scanf("%d", &qtde_maca);
    if (qtde_maca < 12)
    {
        printf("R$%.2f", 1.95*qtde_maca);
    } else {
        printf("R$%.2f", 2.3*qtde_maca);
    }
}