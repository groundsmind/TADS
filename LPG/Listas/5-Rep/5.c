#include <stdio.h>

void main()
{
    int x, y;
    scanf("%d", &x);
    y = x;
    for (int i = 0; i<9; i++)
    {
        scanf("%d", &x);
        if (x > y) y = x;
    }
    printf("\n\n%d\n", y);
}