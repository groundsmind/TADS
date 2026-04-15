#include <stdio.h>
#include <stdlib.h>

void main() 
{

    int x,y,z = 0;

    printf("Insira dois números: ");
    scanf("%i %i", &x, &y);

    if (x>y) 
    {
        int temp = x;
        x = y;
        y = temp;
    }

    for (int n = x+1; n < y; n++) {
        if (n%2 != 0) {
            z += n;
        }
    }

    printf("%i\n", z);
}