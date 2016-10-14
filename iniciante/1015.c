#include <stdio.h>
#include <math.h>

int main()
{
    float x1,y1,x2,y2,p1,p2,res;
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    p1 = x2-x1;
    p2 = y2-y1;
    res = sqrt((p1*p1)+(p2*p2));
    printf("%.4f\n",res);
    return 0;
}