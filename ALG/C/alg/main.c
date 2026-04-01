#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n = 0;
    float h,a,t = 0;
    printf("insira numero\n");
    scanf("%i", &n);
    for (int i=0; i<n; i++) {
        printf("\n \nEscreva %io numero\n", i+1);
        scanf("%f", &t);
        a = a + t;
        h = h + 1/t;
    }

    a = a/n;
    h = n/h;

    printf("\n\nmedia aritmetica: %f\n", a);
    printf("media harmonica: %f", h);
}
