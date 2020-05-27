
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include<bits/stdc++.h>
#define pb push_back
#define F first
#define S second
#define all(v) v.begin(), v.end()
#define FILL(a, x) memset(a, x, sizeof(a))
#define ll long long
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define INF INT_MAX
#define mx 1000010
/*
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ordered_multiset tree<pair<int, int>, null_type,less<pair<int, int> >, rb_tree_tag,tree_order_statistics_node_update>
*/
const double Pi=acos(-1);
using namespace std;
int debug=01;
 
int main() {
     #ifndef ONLINE_JUDGE
                freopen("C:\\Users\\my_code\\input.in", "r", stdin); 
                freopen("C:\\Users\\my_code\\output.in", "w", stdout);
     #endif
    
    
    int tst;
    cin>>tst;
    while(tst--){
        ll x1, x2, y1, y2;
        cin>>x1>>y1>>x2>>y2;
        cout<<1ll+(x2-x1)*(y2-y1)<<"\n";
    }
}