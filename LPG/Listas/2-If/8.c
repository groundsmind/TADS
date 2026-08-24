#include <stdio.h>

void main()
{
    int ano;
    printf("Ano: ");
    scanf("%d", &ano);
    if ((!(ano%4) && (ano%100)) || !(ano%400)) printf("Bissexto!"); else printf("Não bissexto!");
}