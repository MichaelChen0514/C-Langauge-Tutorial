#include <stdio.h>
#include <stdlib.h>

int main()
{
  double x=5.0, y=-5.0;
  while (x-y>0.0001)
  {
      double z=(x+y)/2.0;
      if (z*z*z+3.0*z*z+2.0>0.0)
        x=z;
      else
        y=z;
  }
    printf("%lf",y);

return 0;
}
