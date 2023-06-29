#include <stdio.h>
int main(void) {
    double diameter, height;
    printf("Container painting\n\n");
    printf("Enter height: ");
    scanf("%lf", &height);
    printf("Enter diameter: ");
    scanf("%lf", &diameter);

    double radius = diameter/2;
    double cans = (2*radius*radius*3.14159265 + height*2*radius*3.14159265) / 2;

    printf("\nNumber of cans to buy: %f\n", cans);

    return 0;
}
