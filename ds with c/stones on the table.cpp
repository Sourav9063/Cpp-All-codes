#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    char ar[n];
    cin>>ar;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]==ar[i+1])flag++;
    }

    cout<<flag;





}
