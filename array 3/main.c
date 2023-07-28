#include <stdio.h>
#include <stdlib.h>

int main()
{
    int data[5]={-1, 2, 3 ,-4 ,-7};
    int data2[5];
    int n, i=0;
    for (n=0; n<=4; n=n+1)
    {
        if (data[n]>0)
            {data2[i]=data[n];
            i++;}
    }
    printf("%d", i);
    return 0;
}
