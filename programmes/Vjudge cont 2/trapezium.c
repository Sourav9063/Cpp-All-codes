#include<stdio.h>
#include<math.h>

float abss(float p)
{
    if(p<0)
    {
        p=-p;
    }


    return p;
}

int main()
{
    int i, t;
    double s, p,a,b,c,d,area;
    scanf("%d",&t);

    for(i=1; i<=t; i++)
    {
        scanf("%lf %lf %lf %lf",&a,&b,&c,&d);

        p= abss(c-a);

      // printf("%f",p);

        s=(p+b+d)/2;
 //printf("%f",s);
        area=((c+a)/p*(sqrt(s*(s-b)*(s-d)*(s-p))));

        printf("Case %d: %lf",i,area);


    }
}


