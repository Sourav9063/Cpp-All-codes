#include<stdio.h>
int main()
{
    int T,std,i,j,k,l,m;
    scanf("%d",&T);
    for(j=1; j<=T; j++)
    {


        scanf("%d",&std);
        long long int flag, bechara=0, arr[std];

        for(i=1; i<=std; i++)
        {
            scanf("%lld",&arr[i]);
        }

        for(k=1;k<std;k++)
        {
           // bechara=arr[k];
            flag=k;
            for(l=std;l>0;l--0)
            {
                if(arr[k]!=arr[l]) continue;

            if(arr[k]==arr[l])    {arr[k]=arr[l]='\0'; break;}


            }


        }
        for(m=1;m<=std;m++)
        {
            if(arr[m]!='\0') bechara=arr[m];
        }


 printf("Case %d: %lld\n",j,bechara);





    }







}
