#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h,w;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &h);
    printf("Enter the width of the rectangle: ");
    scanf("%d",&w);
    printf("+");
    int x;
    for (x=1; x<=w; x++)
        printf("-");
    printf("+\n");
    int i;
    for (i=1; i<=h-2; i++){
        printf("|");
        for (x=1; x<=w; x++)
            printf(".");
        printf("|\n");}
    printf("+");
    for (x=1; x<=w; x++)
        printf("-");
    printf("+\n");
    return 0;
}
