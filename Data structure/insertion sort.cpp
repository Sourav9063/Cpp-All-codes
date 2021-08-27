#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,tmp,ptr;
    cin>>n;

    int a[n+2];
    a[0]=-100000;

    for(int i=1; i<=n; i++)
    {

        cin>>a[i];
    }

    for(int i=2; i<=n; i++)
    {
        tmp=a[i];
        ptr=i-1;
        while(a[ptr]>tmp)
        {

            // {
            // cout<<ptr<<endl;

            a[ptr+1]=a[ptr];
            //a[ptr]=-1;
            ptr--;
        }
        //}
        //else
        // {
        // cout<<"point"<<ptr<<endl;
        a[ptr+1]=tmp;
        //  break;

        //}

        //  }




        for(int i=1; i<=n; i++)
        {
            cout<<a[i];

        }

        cout<<endl;




    }

    for(int i=1; i<=n; i++)
    {
        cout<<a[i]<<' ';

    }





}





