#include<math.h>
#include "myfunc.h"
int sqr_my(int a, int b,int c, double* x1,double* x2)
{
    double d = b*b-4*a*c;
    if(d<0) return 0;
    if(d==0)
    {
        *x1 = -b/2*a;
        return 1;
    }
    *x1 = -(b+sqrt(d))/2*a;
    *x2 = -(b-sqrt(d))/2*a;
    return 2;

}
