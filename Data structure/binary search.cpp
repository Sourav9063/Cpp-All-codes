#include<bits/stdc++.h>

using namespace std;
int main()
{   int x;
    int p,q;
    int k,n;
    int i=1,j;
   scanf("%d",&n);
   k=n;
   int num[n+1];
    while(k--)
    {


        scanf("%d",&num[i]);
        i++;

    }

     for(i=1;i<k;i++)
    {
        for(j=i+1;j<=k;j++)
        {
            if(num[i]>num[j])
            {


            p=num[i];
            q=num[j];
             num[i]=q;
            num[j]=p;
            }
        }
    }



    for(i=1;i<n;i++)
    {
        cout<<num[i];
        cout<<" ";
    }



     printf("The item=");
    cin>>x;
    int b=1,e=n,m=(b+e)/2;
    while(b<=e&&num[m]!=x)
    {
        if(x<num[m])
        {
            e=m-1;
        }
        else b=m+1;

        m=(b+e)/2;

        if(num[m]==x)
        {
            cout<<"the position of the item";
            cout<<m;
            return 0;
        }
    }









}
