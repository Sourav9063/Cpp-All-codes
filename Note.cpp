//                      Name: 
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include<bits/stdc++.h>
using namespace std;

#define ll long long int //lld
#define ull unsigned long long int //llu

#define pt cout<<"*"<<"\n";
#define nl cout<<"\n";
#define deb(x) cout << #x << "=" << x << "\n";

#define pb(a)    emplace_back(a)
#define all(x)   (x).begin(),(x).end()
#define rSort(x) sort((x).rbegin(),(x).rend())

#define Sourav ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

//template<typename... T>void read(T&... args) {((cin >> args), ...);}
template <class T>inline void sarray(T* st, T* nd) { while (st < nd)cin >> *st++;/*sf("%d", st++);*/ }
template <class T>inline void parray(T* st, T* nd) { while (st < nd)cout << *st++ << ' ';nl/*sf("%d", st++);*/ }
long long MOD = 1000000007;
ll binpow(ll a, ll b)
{
    ll res = 1;
    a %= MOD;
    while (b)
    {
        if (b & 1)
            res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}
int mod(string& num)
{
    // Initialize result
    int res = 0;

    // One by one process all digits of 'num'
    for (int i = 0; i < num.size(); i++)
        res = (res * 10 + num[i] - '0') % MOD;

    return res;
}
ll binExRec(ll a, ll b) {
    if (b == 0)return 1;
    ll res = binExRec(a, b >> 1);
    if (b & 1) {
        return a * res * res;
    }
    else {
        return res * res;
    }
}


///// dfs matrix
unordered_map<int, bool>mpGraph[200010];
bitset<200010> visited;
void dfs(int par) {

    visited[par] = 0;
    for (int i = visited._Find_first(); i < visited.size(); i = visited._Find_next(i))
    {
        // deb(i)
        if (mpGraph[par][i] == true) {

            dfs(i);
        }
    }

}
//    cin >> n >> m;
//    for(int i=1;i<=n;++i) visited[i] =1;
//     for (int i = 0; i < m; i++)
//     {
//         int u, v;
//         cin >> u >> v;
//         mpGraph[u][v] = mpGraph[v][u] = true;

//     }
    /// end dfs matrix


vector<ull>vPrime, hp(10000000, 0), lp(10000000, 0);
bitset<10000000>isPrime;

void seive()
{
    ull n = 100000;
    //suf(n);
    isPrime.flip();
    isPrime[1] = 0;
    vPrime.pb(2);
    for (ull i = 2; i * i < n; i++)
    {
        if (isPrime[i])
        {
            lp[i] = hp[i] = i;
            for (ull j = i * 2; j < n; j += i)
            {
                isPrime[j] = 0;
                hp[j] = i;
                if (lp[j] == 0) {
                    lp[j] = i;
                }
            }
        }
    }
    for (ull p = 1; p <= n; p += 2)
    {
        if (isPrime[p])
        {
            vPrime.pb(p);
            //cout<<p<<endl;
        }
    }
}
int main()
{
    Sourav;

#ifndef ONLINE_JUDGE
    freopen("C:\\Users\\my_code\\input.in", "r", stdin);
    freopen("C:\\Users\\my_code\\output.in", "w", stdout);
#endif


    //     seive();
    //     // cout << lp[91]<<" " << hp[91]  ;



    //     for (size_t i = 1; i < 1000; i++)
    //     {
    //         cout << lp[i] << " " << hp[i];nl
    //     }

    //    string s = bitset<32>(k).to_string();
    //     reverse(s.begin(), s.end());
    // clock_t start = clock();
    ll a;
    string b;
    cin >> a;cin >> b;
    // ll tmpb = mod(b);
    int res = 0;

    // One by one process all digits of 'num'
    for (int i = 0; i < b.size(); i++)
        res = (res * 10 + b[i] - '0') % MOD;
    cout << binpow(a, res);
    // nl
    //     cout << fixed << float(clock() - start) / CLOCKS_PER_SEC << endl;

    return 0;
}

/*
  Documentation:



*/