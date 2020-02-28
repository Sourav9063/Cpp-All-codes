#include<stdio.h>
#include<math.h>
#define pi 3.1415
int main()
{
    double r,n,s,area;
while(scanf("%lf %lf",r,n)==2)
{
   printf("%.3lf",((n*r*r)/2)*sin((2*pi)/n));
}
return 0;
}
