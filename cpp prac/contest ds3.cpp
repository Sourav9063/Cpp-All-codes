
#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long int T;
  long long  int a,b;
  long long  int aa,bb;
 long long int ans1,ans2;

    cin>>T;
    while(T--)
    {


        cin>>a>>b;
        aa=(a+b);
        bb=(a-b);

        if(a<b||(bb%2)!=0)
        {
            printf("impossible\n");

        }
        else
        {
            ans2=bb/2;
            ans1=b+ans2;
            printf("%lld %lld\n",ans1,ans2);
        }





    }





}
