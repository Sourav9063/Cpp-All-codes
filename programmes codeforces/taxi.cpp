#include<bits/stdc++.h>
using namespace std;
int main()
{
    int gr,mem, cnt[5]= {0};
    cin>>gr;
    while(gr--)
    {
        scanf("%d",&mem);
        cnt[mem]+=1;


    }
    //printf("%d %d %d %d",cnt[1],cnt[2],cnt[3],cnt[4]);
    int total=0;
    total=cnt[4]+cnt[3]+cnt[2]/2;
    //obviously lagbeiii
    if(cnt[2]%2==1)
    {
        total+=1;
        cnt[1]-=2; // 1ta 2gr er saathe 2 ta 1gr
    }
    if(cnt[1]>0)
    {
        total+=(cnt[1]+3)/4;
        //car to khali rakha jabe na


    }



    cout<<total;








}
