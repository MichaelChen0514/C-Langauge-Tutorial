#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct{
double x; double y;
}vector;
vector v_difference (vector a, vector b){
    vector c;
    c.x=a.x-b.x;
    c.y=a.y-b.y;
    return c;
    }
int main (){
    vector v1, v2, v3;
    v1.x=1.0; v1.y=2.0;
    v2.x=3.0; v2.y=4.0;
    v3=v_difference(v1, v2);
    double d=pow((v2.y-v1.y), 2)+pow((3.0-1.0), 2);
    printf("%lf", sqrt(d));
    return 0;
}
