/*Include the core head file*/
#include <math.h>
#include <stdio.h>

/*Include the main programme*/
int main(){
/*declare the int variable called f*/
    int num; 
    printf("please give an interger value\n");
    /*include a input with a physical address*/
    scanf("The Value is %d\n", & num);
    printf("The Value is %d\n", num);
    printf("The Square of %d is %d\n", num, num*num);
    return 0;
}