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

        int n;
        cin >> n;
        string s;
        cin >> s;
        //split s int two section so that the sum of the unique char of each section is maximize and print the maximized number

        // int ans = 0;
        int leftUniMap[n] = { 0 };
        int rightUniMap[n] = { 0 };
        int leftArr[26] = { 0 };
        int rightArr[26] = { 0 };
        int leftUnique = 0;
        int rightUnique = 0;
        for (int i = 0, j = n - 1;i < n || j>0;i++, j--) {

            // int unique = 0;
            // for (int left = 0;left <= i;left++) {
            //     leftArr[s[left] - 'a'] = 1;
            // }
            // for (int right = i + 1;right < n;right++) {
            //     rightArr[s[right] - 'a'] = 1;
            // }

            // for (int j = 0;j < 26;j++) {
            //     unique += (leftArr[j] + rightArr[j]);
            // }

            // // deb(i)
            // //     deb(ans)

            // ans = max(ans, unique);

            if (leftArr[s[i] - 'a'] == 0)
            {
                leftUnique++;
                leftArr[s[i] - 'a'] = 1;
                leftUniMap[i] = leftUnique;
            }
            else
            {
                leftUniMap[i] = leftUnique;
            }

            if (rightArr[s[j] - 'a'] == 0)
            {
                rightUnique++;
                rightArr[s[j] - 'a'] = 1;
                rightUniMap[j] = rightUnique;
            }
            else
            {
                rightUniMap[j] = rightUnique;
            }




        }


        // parray(leftUniMap, leftUniMap + n);
        // parray(rightUniMap, rightUniMap + n);
        ll ans = 0;
        for (int i = 0;i < n - 1;i++) {
            ll tmp = leftUniMap[i] + rightUniMap[i + 1];
            ans = max(ans, tmp);
        }
        cout << ans << endl;

    }

    return 0;
}

/*
  Documentation:



*/