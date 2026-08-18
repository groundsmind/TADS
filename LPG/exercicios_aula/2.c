#include <stdio.h>
void main()
{
    int base, exp, pot = 1;
    printf ("base, exp:\n");
    scanf("%d%d", &base, &exp);

    for (int i = 0; i < exp; i++) {pot*=base;}

    printf("potencia: %d\n", pot);
}