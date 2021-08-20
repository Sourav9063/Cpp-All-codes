#include<bits/stdc++.h>
using namespace std;
const int MX=1e5+5;
vector<int> v[MX];
vector<int> c(MX);
int n,x,y,mx,ans;
void dfs(int n,int p){
    if(v[n].size()==1 && n!=1) return;
    for(auto it: v[n]){
        if(it==p) continue;
        dfs(it,n);
        if(n!=1) c[n]|=c[it];
    } 
}
int main()
{
    cin >> n;
    for(int i=0; i<n-1; i++){
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i=1; i<=n; i++) cin >> c[i];
    dfs(1,0);
    for(int i=1; i<=n; i++) c[i]|=c[1],mx=max(mx,c[i]);
    for(int i=1; i<=n; i++) ans=max(ans,mx|c[i]);
    cout << ans;
    return 0;
}