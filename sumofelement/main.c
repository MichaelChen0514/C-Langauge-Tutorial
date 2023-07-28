#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, sum=0;
    scanf("%d", &a);
    while (a!=0)
    {
        scanf("%d", &a);
        sum=sum+a;
    }
    printf("%d", sum);
    return 0;
}
