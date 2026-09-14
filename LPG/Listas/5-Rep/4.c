#include <stdio.h>

void main()
{
    int num, inc; int t = 0;
    scanf("%d %d", &num, &inc);

    while (t != num)
    {
        printf("%d\n", t);
        t+=inc;
    }
    printf("%d\n", t);
}