#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter a integer\n");
    int num;
    scanf("%d", &num);
    if(num>100)
        printf("%d\>100\n",num);
    else if (num==100)
        printf("%d=100",num);
    else
        printf("%d\<100\n",num);
    return 0;
}
