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
int n, m;
vector<int>ctV;int ct;
unordered_map<int, bool>mpGraph[200010];
bitset<200010> visited;
void dfs(int par) {
    ct++;
    visited[par] = 0;
    for (int i = visited._Find_first(); i <visited.size(); i = visited._Find_next(i))
    {
        // deb(i)
            if (mpGraph[par][i] == false) {

            dfs(i);
        }
    }



}
//create a function to find power of two number
int power(int x, int y)
{
    int res = 1;
    while (y > 0)
    {
        if (y & 1)
            res = res * x;
        y = y >> 1;
        x = x * x;
    }
    return res;
}
//create a function to find the number of set bits in a number
int countSetBits(int n)
{
    int count = 0;
    while (n)
    {
        count++;
        n = n & (n - 1);
    }
    return count;
}
//create a function to find the number of last 0 
int lastZero(int n)
{
    int count = 0;
    while (n)
    {
        count++;
        n = n & (n - 1);
    }
    return count;
}

int main()
{
    Sourav;

#ifndef ONLINE_JUDGE
    freopen("C:\\Users\\my_code\\input.in", "r", stdin);
    freopen("C:\\Users\\my_code\\output.in", "w", stdout);
#endif

    cin >> n ;
    cout<<lastZero(n)<<endl;

        return 0;
}

/*
  Documentation:



*/