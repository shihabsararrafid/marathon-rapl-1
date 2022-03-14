#include <stdio.h>
// rafid is my name
int main()
{

    int a = 1, b = 2, c = 3, d, f;

    scanf("%d %d", &d, &f);
    if (d == a && f == b || f == a && d == b)
    {
        printf("%d", c);
    }
    else if (d == b && f == c || f == b && d == c)
    {
        printf("%d", a);
    }
    else if (d == c && f == a || f == c && d == a)
    {
        printf("%d", b);
    }

    return 0;
}