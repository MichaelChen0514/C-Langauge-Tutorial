#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[10]={25, 69, 54, 8, 77, 6, 29, 10 ,3 , 98};
    int i;
    int min=0;
    for (i=0; i<=9; i++)
        printf("Array=%d ", array[i]);
    printf("The array is:");
    for (i=0; i<=9; i++)
        printf("Array[%d]=%d ",i ,array[i]);
    for (i=1; i<=9; i++)
        if (array[i]<array[min])
            min=i;
    printf("\n");
    printf("The minimum is array[%d]=%d", i, array[min]);
    printf("\n");
    for (i=0;i<=9;i++){
        printf("Array=%d ", array[i]);
        if (i==min){
           printf("[min] ");}}
    return 0;
}
