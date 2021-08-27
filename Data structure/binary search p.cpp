#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    printf("Array size=");
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    sort(a,a+n);
    printf("The item=");
    cin>>x;
    int b=0,e=n-1,m=(b+e)/2;
    while(b<=e&&a[m]!=x)
    {
        if(x<a[m])
        {
            e=m-1;
        }
        else b=m+1;

        m=(b+e)/2;

        if(a[m]==x)
        {
            cout<<"the position of the item";
            cout<<m+1;
            return 0;
        }
    }
}
