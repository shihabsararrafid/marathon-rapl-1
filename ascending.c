#include <stdio.h>
//nerwww
int main()
{

    int a, b, c, large, mid, small;
    scanf("%d %d %d", &a, &b, &c);
    // printf("%d %d %d", a, b, c);
    if (a > b && a > c)
    {
        large = a;
        if (b > c)
        {
            mid = b;
            small = c;
        }
        else if (c > b)
        {
            mid = c;
            small = b;
        }
    }
    else if (b > a && b > c)
    {
        large = b;
        if (a > c)
        {
            mid = a;
            small = c;
        }
        else if (c > a)
        {
            mid = c;
            small = a;
        }
    }
    else if (c > a && c > b)
    {
        large = c;
        if (a > b)
        {
            mid = a;
            small = b;
        }
        else if (b > a)
        {
            mid = b;
            small = a;
        }
    }
    printf("%d %d %d\n", small, mid, large);

    return 0;
}