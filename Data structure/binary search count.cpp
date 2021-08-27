#include<bits/stdc++.h>
using namespace std;

int main()
{

    int p,q;
    int k,n;
    int i=1,j;
    scanf("%d",&n);
    k=n;
    int num[n];
    for(int i=0; i<n; i++) cin>>num[i];

    for(i=0; i<k; i++)
    {
        for(j=i+1; j<=k; j++)
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



    for(i=0; i<n; i++)
    {
        cout<<num[i];
        cout<<" ";
    }



    cout<<"The item\n";

    int x;
    cin>>x;
    int cl=0,cr=0;
    int b=0,e=n-1, m=(b+e)/2;
    int h=1;
   if(num[m]!=x)
   {


    while(b<=e)
    {
        if(x<num[m])e=m-1;
        else b=m+1;

        m=(b+e)/2;




        if(num[m]==x)
        {
            cout<<"Position: ";
            cout<<m+1;

            for(h=1;;h++)
            {
                if(num[m-h]==x)cl++;
                if(num[m+h]==x)cr++;
                if(num[m+h]!=x&&num[m-h]!=x)break;
            }



     cout<<"\n there is ";

            cout<<cr+cl+1;



            break;
        }








    }
   }

   else
        {

            cout<<"Position: ";
            cout<<m+1;
            for(h=1;;h++)
            {
                if(num[m-h]==x)cl++;
                if(num[m+h]==x)cr++;
                if(num[m+h]!=x&&num[m-h]!=x)break;
            }



     cout<<"\n there is ";

            cout<<cr+cl+1;



        }





















}
