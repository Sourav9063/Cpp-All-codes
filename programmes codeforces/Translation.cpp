#include<bits/stdc++.h>
using  namespace std;
int main()
{
    string in1,in2;
    cin>>in1>>in2;

    int len1,len2;
    int flag=0;

    len1=in1.size();
    len2=in2.size();
//    cout<<len1;
if(len1!=len2){cout<<"NO"<<endl;return 0;}

for(int i=0, j=len1-1;i<len1;i++,j--)
{
    if(in1[j]!=in2[i]){flag=1;break;}
}

if(flag)cout<<"NO"<<endl;
else
    cout<<"YES"<<endl;



}
