
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    scanf("%d",&n);
    long long int arr[55555]= {0};
    for(int i=0; i<n; i++)
    {
        scanf("%lld",&arr[i]);
    }
 int flag;
    int q;
    long long int qA,ans1,ans2;
    scanf("%d",&q);

    while(q--)
    {
        scanf("%lld",&qA);

      flag=0;
        for(int j=0; j<n; j++)
        {
            if(arr[j]>=qA)
            {
                if(arr[j-1]>0)
                    printf("%lld ",arr[j-1]);
                else
                    printf("X ");
                while(arr[j]==qA)
                    ++j;
                if(arr[j]>qA)
                    printf("%lld\n",arr[j]);
                else if(arr[j+1]>0)
                    printf("%lld\n",arr[j+1]);
                else
                    printf("X\n");
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("%lld X\n",arr[n]);

    }









    }











