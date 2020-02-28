#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;


    int arr[111111];

        arr[0]=0;

        arr[1]=1;

        for(int i=1;i<=50000;i++)
        {
            arr[2*i]=arr[i];
            arr[2*i+1]=arr[i]+arr[i+1];

        }



 cin>>n;

    while(n!=0)
    {
int  ma=arr[1];

        for(int i=0;i<=n;i++)
        {
            if(ma<arr[i])ma=arr[i];

        }
        cout<<ma<<endl;
        cin>>n;
    }



}
