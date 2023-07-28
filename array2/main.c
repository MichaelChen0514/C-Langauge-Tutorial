#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    double a[10];
    double average=0.0;
    double sum=0.0;
    int c=0;
    while (i<=9){
        scanf("%lf", &a[i]);
        i=i+1;
    }
    for (i=0;i<=9;i++)
        {
        sum=a[i]+sum;
        }
        average=sum/9;
    printf("%lf\n", average);
    printf("%lf\n",sum );
    for (i=0;i<=9;i++){
        if (a[i]<average)
            c=c+1;}
    printf("%d", c);
    return 0;
}
