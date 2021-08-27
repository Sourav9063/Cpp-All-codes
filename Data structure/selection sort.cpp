#include<bits/stdc++.h>
using namespace std;




int main()
{
    int minloc,n,loc,mi,ab,flag;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }


    for(int i=0; i<n; i++)
    {
        flag=0;

        mi=a[i];
        for(int j=i+1; j<n; j++)
        {

            if(mi>a[j])
            {
                mi=a[j];
                loc=j;
                flag=1;
                //cout<<"in"<<mi<<endl;
            }

        }

        cout<<"index "<<i+1<<" Position of min"<<loc+1<<endl;
        if(flag)
        {
            ab=a[loc];

            a[loc]=a[i];
            a[i]=ab;
        }


    }

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<' ';
    }



}
