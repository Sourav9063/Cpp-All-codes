#include <stdio.h>


int main(){
    int tc = 1,a,b;
    long long int ans;

    while(1)
{
    scanf("%d %d",&a,&b);

        if(a == 0) break;



        printf("Case %d: %lld\n",tc++,(unsigned long long )a*(a-1)/2*b*(b-1)/2);
    }

    return 0;
}
