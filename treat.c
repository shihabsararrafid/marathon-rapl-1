#include <stdio.h>
#include <math.h>
int main()
{
    int x, y, r, w, h;
    // float w, h, dist;
    // dist = (w / 2 - x) * (w / 2 - x) - (h / 2 - y) * (h / 2 - y);

    scanf("%d %d %d %d %d", &w, &h, &x, &y, &r);

    if (x + r <= w && y + r <= h && x > 0 && y > 0)
    {

        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}