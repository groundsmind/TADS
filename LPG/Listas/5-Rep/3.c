#include <stdio.h>

void main()
{
    int v = 0;
    for (int i = 1; i<=100; i++)
    {
        v += i;
        printf("%d\n", v);
    }
}