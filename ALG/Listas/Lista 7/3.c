#include <stdio.h>
#include <stdlib.h>

int imp(int x, int y)
{
    if (y < x) {x = y^x; y = x^y; x = y^x;}

    int s = 0;
    for (int i = x+1; i<y; i++)
    {
        if (i%2!=0) {s += i;}
    }

    return s;
}

void main()
{
    int x,y;
    printf("Insira dois números: ");
    scanf("%i %i", &x,&y);

    int s = imp(x,y);
    
    printf("\nSoma: %i\n\n", s);
}