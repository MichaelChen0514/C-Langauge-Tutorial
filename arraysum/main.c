#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10]={1, 2, 3, 4, 5, 6, 7, 8, 9,10};
    int n, sum=0;
    for (n=0;n<=9;n++)
        sum=a[n]+sum;
    printf("%d\n",sum);
    int product=1;
    for (n=0;n<=9;n++)
        product=product*a[n];
    printf("%d\n",product);
    int max=a[0];
    for (n=0;n<=9;n++)
        if(max>a[n])
            max=a[n];
    printf("%d\n", max);
    int min=a[0];
    for (n=0;n<=9;n++)
        if(min<a[n])
            min=a[n];
    printf("%d\n", min);

    return 0;
}
