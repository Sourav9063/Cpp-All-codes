#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,mo;
    cin>>x;

    if(x<=5){cout<<1<<endl; return 0;}
    else if((x%5)==0)
        cout<<x/5;
    else
        cout<<x/5+1;



}
