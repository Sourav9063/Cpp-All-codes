//                      Name:#pragma GCC optimize("Ofast")#pragma GCC optimize("unroll-loops")#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <bits/stdc++.h>
using namespace std;
#define ll long long int           //lld
#define ull unsigned long long int //llu
#define pt cout << "*" \ << "\n";
#define nl cout << "\n";
#define deb(x) cout << #x << "=" << x << "\n";
#define pb(a) emplace_back(a)
#define all(x) (x).begin(), (x).end()
#define rSort(x) sort((x).rbegin(), (x).rend())
#define Sourav                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL); //template<typename... T>void read(T&... args) {((cin >> args), ...);}
template <class T>
inline void
sarray(T *st, T *nd)
{
    while (st < nd)
        cin >> *st++; /*sf("%d", st++);*/
}
template <class T>
inline void parray(T *st, T *nd)
{
    while (st < nd)
        cout << *st++ << ' ';
    nl /*sf("%d", st++);*/
}
int main()
{
    Sourav;
#ifndef ONLINE_JUDGE
    freopen("C:\\Users\\my_code\\input.in", "r", stdin);
    freopen("C:\\Users\\my_code\\output.in", "w", stdout);
#endif
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll q;
    cin >> q;
    priority_queue<ll> pq;
    pq.push(n);
    unordered_map<ll, priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>>> ans1;
    ans1[n].push(pair<ll, ll>(1, n));
    unordered_map<ll, ll> ans;
    for (ll q = 0; q < k; q++)
    {
        ll a = pq.top();
        pq.pop();
        if (a % 2 == 0)
        {
            if (s[q] == 'L')
            {
                ll b = a / 2;
                ans[b + ans1[a].top().first - 1] = q + 1;
                if (ans1[a].top().second != ans1[a].top().first + 1)
                {
                    ll n = b + ans1[a].top().first;
                    ll m = ans1[a].top().second;
                    ll k = m - n + 1;
                    pq.push(k);
                    ans1[k].push(pair<ll, ll>(n, m));
                    ll x = b + ans1[a].top().first - 2;
                    ll z = ans1[a].top().first;
                    ll v = x - z + 1;
                    pq.push(v);
                    ans1[v].push(pair<ll, ll>(z, x));
                    ans1[a].pop();
                    if (ans1[a].size() == 0)
                        ans1.erase(a);
                    continue;
                }
                if (1 + ans1[a].top().first == ans1[a].top().second)
                {
                    pq.push(1);
                    ans1[1].push(pair<ll, ll>(ans1[a].top().second, ans1[a].top().second));
                    ans1[a].pop();
                    if (ans1[a].size() == 0)
                        ans1.erase(a);
                    continue;
                }
            }
            else
            {
                ll b = (a / 2) + 1;
                ans[b + ans1[a].top().first - 1] = q + 1;
                if (ans1[a].top().second != ans1[a].top().first + 1)
                {
                    ll n = b + ans1[a].top().first;
                    ll m = ans1[a].top().second;
                    ll k = m - n + 1;
                    pq.push(k);
                    ans1[k].push(pair<ll, ll>(n, m));
                    ll x = b + ans1[a].top().first - 2;
                    ll z = ans1[a].top().first;
                    ll v = x - z + 1;
                    pq.push(v);
                    ans1[v].push(pair<ll, ll>(z, x));
                    ans1[a].pop();
                    if (ans1[a].size() == 0)
                        ans1.erase(a);
                    continue;
                }
                if (ans1[a].top().first + 1 == ans1[a].top().second)
                {
                    pq.push(1);
                    ans1[1].push(pair<ll, ll>(ans1[a].top().first, ans1[a].top().first));
                    ans1[a].pop();
                    if (ans1[a].size() == 0)
                        ans1.erase(a);
                    continue;
                }
            }
        }
        else
        {
            ll b = (a / 2) + 1;
            ans[b + ans1[a].top().first - 1] = q + 1;
            if (ans1[a].top().second != ans1[a].top().first)
            {
                ll n = b + ans1[a].top().first;
                ll m = ans1[a].top().second;
                ll k = m - n + 1;
                pq.push(k);
                ans1[k].push(pair<ll, ll>(n, m));
                ll x = b + ans1[a].top().first - 2;
                ll z = ans1[a].top().first;
                ll v = x - z + 1;
                pq.push(v);
                ans1[v].push(pair<ll, ll>(z, x));
                ans1[a].pop();
                if (ans1[a].size() == 0)
                    ans1.erase(a);
                continue;
            }
            if (ans1[a].top().first == ans1[a].top().second)
            {
                ans1[a].pop();
                if (ans1[a].size() == 0)
                    ans1.erase(a);
                continue;
            }
        }
    }
    while (q--)
    {
        ll qi;
        cin >> qi;
        if (ans.find(qi) != ans.end())
            cout << ans[qi] << endl;
        else
            cout << "-1" << endl;
    }
    return 0;
} /*  Documentation:   */