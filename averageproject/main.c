#include <stdio.h>
int main()
{
    int a;
    double sum=0.0;
    int n=0;
    scanf("%d", &a);
    while (a!=0)
    {
        n=n+1;
        sum=sum+a;
        scanf("%d", &a);
    }
    printf("%lf", sum/n);
    return 0;
}
