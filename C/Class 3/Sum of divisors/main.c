#include <stdio.h>
#include <stdlib.h>

int main()
{
    int term;
    term=1;
    int n;
    n=1;
    double sum;
    sum=1.0;
    while (n<=50){
        term=term*n;
        term=term+1;
        sum=sum+(1.0/term);
    }
    printf("%lf", sum);

    return 0;
}
