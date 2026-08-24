#include <stdio.h>

void main()
{
    int x, y;
    scanf("%d %d", &x,&y);
    if (x==y)
    {
        printf("X é igual a Y");
    } else if (x>y)
    {
        printf("X é maior que Y");
    } else
    {
        printf("X é menor que Y");
    }
}