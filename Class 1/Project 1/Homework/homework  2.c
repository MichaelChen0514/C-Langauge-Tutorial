#include <stdio.h>
#include <stdlib.h>
int main(){
/*homework1*/
printf("Hello\nWorld\n\n!");
int a = 5;
printf("Hello \n %d \n", a);
/*homework2*/
double diameter, height;
printf("Enter the value of Height\n");
scanf("%lf", &height);
printf("Enter the value of Diameter\n");
scanf("%lf", &diameter);
printf("Needing %f cans\n",(2*3.14159265*(diameter / 2)* (diameter/2)+ 2 * 3.14159265 * (diameter / 2) * height)/2);/*calculate how many cans*/
return 0;
}

printf("Hello World!\\n\n");
