#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x;  /*x is a number, it can be any number; therefore, "int x" is not suitable here.*/
   printf ("Dear User!");
   printf ("Enter a number, I will print its square!");
   scanf("%lf", &x); /*Did not put the sign of physical address*/
   printf("%lf square is:%lf", x, x*x);
   /*I should change its data type here as well, if the fronter is double, here should be %lf, if the fronter is float,
   here should be %f; the second %lf can also be %.nf (n depends on how accurate the result you want to get)*/
   /*no need the single line for x=x*x*/
    return 0;
}
