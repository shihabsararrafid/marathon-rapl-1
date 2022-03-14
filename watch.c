#include <stdio.h>
// done
#include <math.h>
int main()
{
    int hour, min, second;
    double com, sec, c, d;
    scanf("%lf", &sec);
    com = sec / 3600;
    hour = floor(com);

    c = com - (double)hour;
    min = floor(c * 60);
    d = (c * 60) - min;
    // printf("%f", d);
    second = round(d * 60);
    if (hour == 24)
    {
        hour = 0;
    }
    printf("%d:%d:%d\n", hour, min, second);

    return 0;
}