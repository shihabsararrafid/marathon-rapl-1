#include <stdio.h>
// done now
int main()
{

    int x1, x2, x3, x4, a, b, c;
    scanf("%d %d %d %d", &x1, &x2, &x3, &x4);
    if (x1 > x2 && x1 > x3 && x1 > x4)
    {
        a = x1 - x2;
        b = x1 - x3;
        c = x1 - x4;
    }
    else if (x2 > x1 && x2 > x3 && x2 > x4)
    {
        a = x2 - x1;
        b = x2 - x3;
        c = x2 - x4;
    }
    if (x3 > x2 && x3 > x2 && x3 > x4)
    {
        a = x3 - x2;
        b = x3 - x1;
        c = x3 - x4;
    }
    if (x4 > x2 && x4 > x3 && x4 > x1)
    {
        a = x4 - x3;
        b = x4 - x2;
        c = x4 - x1;
    }

    printf("%d %d %d", a, b, c);
    return 0;
}