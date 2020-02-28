#include<stdio.h>
int main()
{


   long long int n,m,a,row,sha;

    scanf("%lld %lld %lld",&n,&m,&a);

    row=n/a;
    sha=m/a;

    if(n%a!=0) row=row+1;
    if(m%a!=0) sha=sha+1;




    printf("%lld",row*sha);









}
