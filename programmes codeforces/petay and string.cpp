#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int i;
    int ans=0;

    transform(a.begin(),a.end(),a.begin(),::tolower);

 transform(b.begin(),b.end(),b.begin(),::tolower);
//cout<<b<<a;
//cout<<a.length();

for(i=0;i<a.length();i++)
{
    //cout<<a[i]<<b[i];
    if(a[i]==b[i])continue;
     if(a[i]<b[i]){ans=-1;break;}
    if(a[i]>b[i]){ans=+1;break;}

}
cout<<ans;








}
