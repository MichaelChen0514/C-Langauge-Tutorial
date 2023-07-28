#include <stdio.h>
#include <stdlib.h>
double areatriangle(double width, double height)
{
    double result=width*height;
    return result;
}
int main()
{
    double w, h;
    printf("Enter the width and height\n");
    scanf("%lf %lf", &w, &h);
    double result=areatriangle(w,h);
    printf("%lf", result);
    return 0;
}
