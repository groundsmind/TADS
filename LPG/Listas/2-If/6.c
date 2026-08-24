#include <stdio.h>

void main()
{
    int x, y, z;
    scanf("%d %d %d", &x,&y,&z);
    if (x>y)
    {
        if (x>z)
        {
            printf("X é maior que Y e Z");
        }
    }
    else
    {
        if (y>z)
        {
            printf("Y é maior que X e Z");
        } 
        else
        {
            printf("Z é maior que X e Y");
        }
    }
}