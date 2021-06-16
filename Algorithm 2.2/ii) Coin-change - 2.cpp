///Coin_Change ( coin[i] can be taken at most occurrence[i] times )
#include<bits/stdc++.h>
using namespace std;
#define inf 16843009
int dp[1010][1010];
vector<int>coin(1010), occurence(1010);
int coin_change(int i, int sum){
    if(sum<0) return inf;
    if(!i) return sum?inf:0;
    if(dp[i][sum]!=inf) return dp[i][sum];
    int x=sum;
    for(int j=0; j<=occurence[i]; j++, sum-=coin[i]) dp[i][x]=min(dp[i][x], coin_change(i-1, sum)+j);
    return dp[i][x];
}
int main(){
    memset(dp, 1, sizeof(dp));
    int n, sum;
    cin>>n>>sum;
    for(int i=1; i<=n; i++) cin>>coin[i];
    for(int i=1; i<=n; i++) cin>>occurence[i];
    int ans=coin_change(n, sum);
    cout<<(ans<inf?ans:-1);
}
