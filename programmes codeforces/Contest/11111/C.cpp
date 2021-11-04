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

// create a function to find power of two numbers
int power(int x, unsigned int y)
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
// create a dfs to find the depth of a tree
int dfs(int u, int p, vector<int> g[])
{
    int d = 0;
    for (auto v : g[u])
        if (v != p)
            d = max(d, 1 + dfs(v, u, g));
    return d;
}
/*
You are given an array of integers a of length n. The elements of the array can be either different or the same.

Each element of the array is colored either blue or red. There are no unpainted elements in the array. One of the two operations described below can be applied to an array in a single step:

either you can select any blue element and decrease its value by 1;
or you can select any red element and increase its value by 1.
Situations in which there are no elements of some color at all are also possible. For example, if the whole array is colored blue or red, one of the operations becomes unavailable.

Determine whether it is possible to make 0 or more steps such that the resulting array is a permutation of numbers from 1 to n?

In other words, check whether there exists a sequence of steps (possibly empty) such that after applying it, the array a contains in some order all numbers from 1 to n (inclusive), each exactly once.

Input
The first line contains an integer t (1≤t≤104) — the number of input data sets in the test.

The description of each set of input data consists of three lines. The first line contains an integer n (1≤n≤2⋅105) — the length of the original array a. The second line contains n integers a1, a2, ..., an (−109≤ai≤109) — the array elements themselves.

The third line has length n and consists exclusively of the letters 'B' and/or 'R': ith character is 'B' if ai is colored blue, and is 'R' if colored red.

It is guaranteed that the sum of n over all input sets does not exceed 2⋅105.

Output
Print t lines, each of which contains the answer to the corresponding test case of the input. Print YES as an answer if the corresponding array can be transformed into a permutation, and NO otherwise.

You can print the answer in any case (for example, the strings yEs, yes, Yes, and YES will be recognized as a positive answer).
*/

int main()
{
    Sourav;

#ifndef ONLINE_JUDGE
    freopen("C:\\Users\\my_code\\input.in", "r", stdin);
    freopen("C:\\Users\\my_code\\output.in", "w", stdout);
#endif


    ll t;
    cin >> t;
    while (t--)
    {
    
        ll n;
        cin >> n;
        ll arr[n];
        sarray(arr, arr + n);
        sort(arr,arr + n);
        ll i = 0;
        ll tmp = 0;
        ll ans =arr[0];
        for (i = 1; i < n; i++)
        {
            tmp += arr[i - 1];
            arr[i] -= tmp;
            ans=max(ans,arr[i]);
            // parray(arr, arr + n);
        }
        cout << ans << endl;


        

    }





    return 0;
}

/*
  Documentation:



*/