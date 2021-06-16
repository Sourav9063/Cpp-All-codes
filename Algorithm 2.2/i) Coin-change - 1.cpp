///Coin_Change ( Any type of coin can be taken at most once )
#include<bits/stdc++.h>
using namespace std;
#define inf 99999999
int dp[1010][1010];
vector<int>coin(1010);
int coin_change(int i, int sum){
    if(sum<0) return inf;
    if(!i) return sum?inf:0;
    if(~dp[i][sum]) return dp[i][sum];
    return dp[i][sum]=min(coin_change(i-1, sum), 1+coin_change(i-1, sum-coin[i]));
}
int main(){
    memset(dp, -1, sizeof(dp));
    int n, sum;
    cin>>n>>sum;
    for(int i=1; i<=n; i++) cin>>coin[i];
    int ans=coin_change(n, sum);
    cout<<(ans<inf?ans:-1);
}
