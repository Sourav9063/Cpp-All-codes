
#include<stdio.h>
int main()
{

    int a,b,tc=1,i,j;
    long long int sum=0;

    while(1)
    {
        scanf("%d %d",&a,&b);


    for( i = 1; i <= a - 1; i++ )
    {


    	for( j = b - 1; j >= 1; j-- )
	    	{sum += (i * j);}
    }

        printf("Case %d: %lld\n",tc++,sum);






    }




}
