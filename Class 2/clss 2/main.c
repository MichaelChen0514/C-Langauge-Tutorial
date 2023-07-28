#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c, d;
    printf("please enter the value of a and the value of b\n");
    scanf("%lf %lf", &a, &b);
    printf("%lf %lf\n", a, b);
    printf("please enter the value of c and the value of d\n");
    scanf("%lf %lf",&c ,&d);
    printf("%lf %lf\n", c, d);
    double l;
    l=sqrt((a-c)*(a-c)-(b-d)*(b-d));
    printf("%lf", l);
    return 0;
}
