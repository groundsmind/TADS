#include <stdio.h>

void main()
{
    int x, y, z;
    scanf("%d %d %d", &x,&y,&z);
    if ((x==y)&&(x==z))
    {
        printf("Equilátero");
    }
    else
    {
        if ((x==y)||(y==z)||(z==x)) 
        {
            printf("Isóceles");
        }
        else
        {
            printf("Escaleno");
        }
    }
}