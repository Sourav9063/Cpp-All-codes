#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
   cin>>n;
    int ar[n];
    ar[n]={0};
  //  cout<<ar[n];
    for (int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
int t=n+1;
    sort(ar,ar+n);
//cout<<ar[n];

int ans=0;
int sum1=0,sum2=0;

for (int j=1;;j++)
{

     for (int i=0;i<n;i++)
    {
       if(i<n-j) sum1+=ar[i];
       else sum2+=ar[i];
    }
  //  cout<<sum1<<endl;
    //cout<<sum2<<endl;



    if(sum2>sum1){ans=j;break;}
    else sum1=sum2=0;

}

cout<<ans<<endl;
















}
