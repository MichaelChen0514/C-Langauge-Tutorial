#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int product=1;
    scanf("%d", &a);
    while (a!=0)
    {
        product=product*a;
        scanf("%d", &a);
    }
    printf("%d", product);
    return 0;
}
