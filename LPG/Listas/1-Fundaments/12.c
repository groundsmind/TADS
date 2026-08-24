#include <stdio.h>

void main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("Soma: %d\n", x+y);
    printf("Subtração: %d\n", x-y);
    printf("Multiplicação: %d\n", x*y);

    printf("Divisão: %.2f\n", (double)x/(double)y);

    long long int pot = 1;
    for (int i = 0; i<y; i++) {pot*=x;}
    printf("%d^%d: %d\n", x,y,pot);

    printf("resto de %d sobre %d: %d\n", x,y,x%y);
}