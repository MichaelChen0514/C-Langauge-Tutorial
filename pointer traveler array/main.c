#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t[5] = {1,4,2,7,3};
    int *p=&t[0];
    int i;
    for (i=0; i<=4;i++)
        printf("%d ", *(p+i));
    return 0;
}
