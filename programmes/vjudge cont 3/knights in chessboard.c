
#include<stdio.h>

int main()
{
    int testcase,m,n,ans,mn, even;
    int i;
    scanf("%d",&testcase);


    for(i=1; i<=testcase; i++)
    {
        scanf("%d%d",&m,&n);
        mn=m*n;


        if(m==1||n==1)printf("Case %d: %d\n",i,mn);

      else  if(m%2==0||n%2==0)
        {
            printf("Case %d: %d\n",i,mn/2);

        }


        else
        {

            printf("Case %d: %d\n",i,mn/2+1);
        }







    }








}
