#include <stdio.h>

void main()
{
    int par, impar = 0;
    for (int i = 0; i<10; i++)
    {
        int temp; scanf("%d", &temp);
        if (temp%2==0) par++; else impar++;
    }
    printf("\n%d pares e %d impares.", par, impar);
}