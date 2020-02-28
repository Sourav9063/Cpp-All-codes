
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

    int q;
    long long int qA,ans1,ans2;
    scanf("%d",&q);
    int j=1;
    while(q--)
    {
        scanf("%lld",&qA);

        if(qA>=arr[n-1])
        {

            printf("%lld X\n",arr[n-1]);
        }

        else if(qA<=arr[0])
        {

            printf("X %lld\n ",arr[0]);
        }

        else
        {
            for(int i=0; i<n-1; i++)
            {
                if(arr[i]==qA)
                {
                    while(j++)
                    {
                        if(arr[i-j]<arr[i])
                        {
                            ans1=arr[i-j];
                            break;
                        }
                    }
                    j=1;
                    while(j++)
                    {
                        if(arr[i+j]>arr[i])
                        {
                            ans2=arr[i+j];
                            break;
                        }
                    }



                    printf("%lld %lld\n",ans1,ans2);
                    break;
                }

                else if( arr[i]<qA&&arr[i+1]>qA)
                {

                    printf("%lld %lld\n",arr[i],arr[i+1]);
                    break;
                }

            }

        }




    }









}
