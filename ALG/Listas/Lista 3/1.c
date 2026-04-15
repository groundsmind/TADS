#include <stdio.h>
#include <stdlib.h>

void main() 
{
 
    int num;

    printf("Insina número: \n");
    scanf("%i", &num);
    printf("\n\nTabuada do %i:\n", num);

    for (int i = 0; i<=10; i++) {
        int mult = num * i;
        printf("%i x %i = %i\n", num, i, mult);
    }

}