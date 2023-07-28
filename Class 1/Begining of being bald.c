/* printnumber.c -- printing a number */
#include <stdio.h>
int main()
{
	int n;
	int a;        /* declaring an integer var., called n */
	n = 2;        /* n <- 2 assignement of value */
	a = 3;
	printf("The value is: %d,%d\n",n, a);
	n = -5;
	a = 5;
	printf("the value is:%d %d\n", n, a);
	return 0;
}