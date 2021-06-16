///knapsack_Brute-force
#include<bits/stdc++.h>
using namespace std;
vector<int>value(1000010), weight(1000010);
int knapsack(int i, int capacity){
    if(!i) return 0;
    if(weight[i]>capacity) return knapsack(i-1, capacity);
    return max(knapsack(i-1, capacity), knapsack(i-1, capacity-weight[i])+value[i]);
}
int main() {
    int n, capacity;
    cin>>n>>capacity;
    vector<pair<int, int>> v(n);
    for(int i=0; i<n; i++) cin>>v[i].first;
    for(int i=0; i<n; i++) cin>>v[i].second;
    sort(v.rbegin(), v.rend());
    for(int i=1; i<=n; i++) value[i]=v[i-1].first, weight[i]=v[i-1].second;
    cout<<knapsack(n, capacity);
}
