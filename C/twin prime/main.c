#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int check_prime (int b)
{
    int a;
    for (a=2; a<b; a=a+1)
        if ((a%b)==0)
    return 0;
}
  int twinnum(int t, int k){
     while (k>0){
        if (k % 10==t)
            return 1;
        k/=10;
    }
    return 0;
    }
int main()
{
    int x, y;
    while (x<60){
        y +=2;
        while(!(check_prime(y)&& twinnum(y+2)))
            y+=2;
        ++x;
    }
        printf("%d %d\t", y, y+2);
    return 1;
}
