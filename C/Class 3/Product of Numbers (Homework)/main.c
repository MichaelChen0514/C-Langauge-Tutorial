#include <stdio.h>
#include <stdlib.h>

int main()
{
    int product;
    product=1;
    int n;
    n=10;
    while (n>=2)
    {
        product=product*n;
        n=n-1;
    }
    printf("%d", product);
    return 0;
}
