#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter a number:\n");
    int num;
    scanf("%d", &num);
    if (num<0)
        printf("The absolute value of this number is: %d\n", -num);
    else if(num==0)
        printf("The absolute value of this number is: %d\n", num);
    else
        printf("The absolute value of this number is: %d\n", num);
    return 0;
}
