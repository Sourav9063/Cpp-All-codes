#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int ans=0;

    while(N--)
    {
        int p,q;
        cin>>p>>q;

        if((q-p)>=2)ans++;


    }

    cout<<ans<<endl;


}
