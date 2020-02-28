#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,n;
    cin>>n>>t;
    char a, arr[n];
    int ar[n]= {0};
    int b,g;
    b=g=0;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];

        if(arr[i]=='B')
        {
            b++;
            ar[b]=i;
        }
        else g++;

    }
    // cout<<b<<g;
    // cout<<arr;

    while(t--)
    {


            for(int i=1; i<=n; i++)
            {
                if(arr[i]=='B'&&arr[i+1]=='G')
                {
                    a=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=a;

                }
            }



    }




 for(int i=1; i<=n; i++)
            {
cout<<arr[i];

            }
}
