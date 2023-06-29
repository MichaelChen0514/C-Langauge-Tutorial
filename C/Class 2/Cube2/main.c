#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    for (x=1;x<=100;x=x+1)
       printf("%d\t", x*x*x);

    return 0;
}
