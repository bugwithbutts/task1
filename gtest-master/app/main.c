#include <stdio.h>

#include "myfunc.h"
int main()
{
    printf("Hello World!\n");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    double x1, x2;
    switch(sqr_my(a,b,c,&x1,&x2))
    {
        case 2: printf("%f\n",x2);
        case 1: printf("%f\n",x1);
        case 3: break;
        default: printf("No solutions\n");
    }

    return myfunc(2);
}
