#include <stdio.h>
#include <math.h>
int main()
{
    int x, y, r;
    float w, h, dist;

    scanf("%f %f %d %d %d", &w, &h, &x, &y, &r);
    dist = (w / 2 - x) * (w / 2 - x) - (h / 2 - y) * (h / 2 - y);
    // printf("%f %f %d %d %d", w, h, x, y, r);
    // printf("%f", sqrt(dist));
    if (y > r && x > r && (h / 2) > r && (w / 2) > r)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}