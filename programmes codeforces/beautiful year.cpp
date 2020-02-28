#include<bits/stdc++.h>
using namespace std;

int check(int year)
{

    int n[4];
    for( int i=0;i<4;i++)
    {
        n[i]=year%10;
        year/=10;

    }

    for( int i=0;i<4;i++)
    {

        for(int j=1;j<4;j++)
        {//cout<<n[i]<<endl;
            if(n[i]==n[j]){return 1;break;}
        }
    }
return 0;
}


int main()
{
    int yr,flag=0;
    cin>>yr;
    while(yr<=9000)
    {
        yr++;

       flag =check(yr);

      if(!flag)break;


    }

cout<<yr<<endl;

}
