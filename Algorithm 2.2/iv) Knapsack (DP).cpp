///knapsack_Dynamic
#include<bits/stdc++.h>
using namespace std;
vector<int>value(1010), weight(1010);
int dp[1010][1010];
int knapsack_dp(int i, int capacity){
    if(!i) return 0;
    if(!dp[i][capacity]) return dp[i][capacity];
    if(weight[i]>capacity) return dp[i][capacity]=knapsack_dp(i-1, capacity);
    return dp[i][capacity]=max(knapsack_dp(i-1, capacity), knapsack_dp(i-1, capacity-weight[i])+value[i]);
}
int main() {
    memset(dp, -1, sizeof(dp));
    int n, capacity;
    cin>>n>>capacity;
    for(int i=1; i<=n; i++) cin>>value[i];
    for(int i=1; i<=n; i++) cin>>weight[i];
    cout<<knapsack_dp(n, capacity);
}
