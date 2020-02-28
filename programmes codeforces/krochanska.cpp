#include<bits/stdc++.h>
using namespace std;


int main()
{


    int t;
    cin>>t;
    int n,s;
    int a,b;
    int in[100][100]={0};



    while(t--)
    {
        cin>>n>>s;
        int arr[n+1]={0};
        while(s--)
        {
            cin>>a;
            while(a!=0)
            {

                cin>>b;
                if(b==0)break;
                in[a][b]=1;
                arr[a]++;
                arr[b]++;
                //cout<<a<<arr[a]<<' '<<b<<arr[b]<<endl;
                a=b;

            }
        }
        //check the connection;

      for(int i=1;i<=n;i++)
        {
            cout<<i<<','<<arr[i]<<endl;
        }



  int bi;
int m=arr[1];


      for(int i=2;i<=n;i++)
      {
          if(m<=arr[i]){m=arr[i];bi=i;}
          cout<<i<<bi<<','<<endl;
      }




cout<<bi<<endl;

















    }




}
