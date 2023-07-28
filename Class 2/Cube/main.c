#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y=1;
    while (y<=100){
        printf("%d\t", y*y*y);
        y=y+1;
    }
    return 0;
}
