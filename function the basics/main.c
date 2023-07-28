#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double cube (double x)
{
    double a;
    a=x*x*x;
    return a;
}
double absolute (double y)
{
    if (y<0)
        y=-y;
    else
        y=y;
    return y;
}
int main()
{
    for (double n=-1.0;n<=1.0;n=n+0.1)
        printf("%lf %lf %lf %lf\n", n, cube(n), absolute(n), sin(n));
    return 0;
}
