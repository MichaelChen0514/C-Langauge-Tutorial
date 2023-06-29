#include <stdio.h>
#include <stdlib.h>

int main()
{
    int divisor, result, num, sum;
    printf("Enter an positive integer\n");
    scanf("%d", &num);
   for (divisor=1; divisor<num; divisor+1)
    {
    result=num/divisor;
    if (result*divisor==num)
    {
        sum=sum+divisor;
    }
   }
    printf ("%d", sum);
    return 0;
}
