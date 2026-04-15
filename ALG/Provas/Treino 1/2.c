#include <stdio.h>

void main()
{
    int x = 0;
    printf("Escreva número: ");
    scanf("%i", &x);
    for (int y = 1; y <= 10; y++)
    {
        printf("%i vezes %i é %i\n", x, y, (x*y));
    }
}