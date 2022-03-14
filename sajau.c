#include <stdio.h>
// done bfghjtydrftguyhfg
int main()
{
    int a, b, c, small, mid, large;
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
    else if (c > b && c > a)
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
    if (a == b && a > c)
    {
        small = c;
        mid = a;
        large = b;
    }
    else if (a == b && a < c)
    {
        large = c;
        mid = a;
        small = b;
    }
    else if (c == b && a < c)
    {
        large = c;
        mid = b;
        small = a;
    }
    else if (c == b && a > c)
    {
        large = a;
        mid = b;
        small = c;
    }
    else if (a == c && a < b)
    {
        large = b;
        mid = a;
        small = c;
    }
    else if (a == c && a > b)
    {
        large = a;
        mid = c;
        small = b;
    }
    else if (a == b && a == c)
    {
        large = c;
        mid = c;
        small = c;
    }
    printf("%d %d %d\n", small, mid, large);
    return 0;
}