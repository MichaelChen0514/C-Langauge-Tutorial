#include <stdio.h>
#include <stdlib.h>
double volume(double length, double width, double height)
{
    double volume=length*width*height;
    return volume;
}
int main()
{
   printf("Enter the length, width and height\n");
   double length, width, height, result;
   scanf("%lf %lf %lf",&length, &width, &height);
   result=volume(length, width, height);
   printf("%.2f", result);
    return 0;
}
