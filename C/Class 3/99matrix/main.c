#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row;
    for (row=1;row<=9;row=row+1)
   {
       int col;
       for (col=1;col<=9;col=col+1)
        {
        printf ("%d,",row*col);
       }
       printf("\n");
   }

    return 0;
}
