#include <stdio.h>

void main()
{
    int x;
    scanf("%d", &x);
    printf("Antecessor de %d é %d, sucessor é %d\n", x, x-1, x+1);
}