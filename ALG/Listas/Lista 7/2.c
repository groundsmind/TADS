#include <stdio.h>
#include <stdlib.h>

int small(int x, int y, int z)
{
    int s = __INT_MAX__;
    if (x < s) s = x;
    if (y < s) s = y;
    if (z < s) s = z;

    return s;
}

void main()
{
    int x,y,z;
    printf("Insira três números: ");
    scanf("%i %i %i", &x,&y,&z);

    int s = small(x,y,z);
    
    printf("\nMenor valor: %i\n\n", s);
}