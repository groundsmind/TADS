#include <stdio.h>

void main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    a = b^a; b = a^b; a = b^a;
    printf("a: %d\n", a);
    printf("b: %d\n", b);
}