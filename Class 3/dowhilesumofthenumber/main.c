#include <stdio.h>
#include <stdlib.h>

int main()
{
    double sum=0.0;
    double a;
    do
    {
        printf("Enter a number:\n");
        scanf("%lf", &a);
        sum=sum+a;

    }
    while(sum<=99.9);

    return 0;
}
