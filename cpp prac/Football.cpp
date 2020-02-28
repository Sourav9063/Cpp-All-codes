#include<bits/stdc++.h>
using namespace std;
int main()
{
    string in;
    int i,a=0,b=0;
    cin>>in;
    for(i=0; i<in.length(); i++)
    {
        if(in[i]=='1')
        {
            a++;
            b=0;
            if(a>=7)break;
        }
        else
        {
            b++;
            a=0;
            if(b>=7)break;

        }

    }
    //cout<<a;
    if(a>=7||b>=7)cout<<"YES";
    else cout<<"NO";




}
