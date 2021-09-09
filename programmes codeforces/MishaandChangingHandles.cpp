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
template <class T>inline void sarray(T* st, T* nd){while(st<nd)cin>>*st++;/*sf("%d", st++);*/}
template <class T>inline void parray(T* st, T* nd){while(st<nd)cout<<*st++<<' ';nl/*sf("%d", st++);*/}


struct Name
{
    string oldName;
    string newName;
};


int main()
{
Sourav;

 #ifndef ONLINE_JUDGE
            freopen("C:\\Users\\my_code\\input.in", "r", stdin); 
            freopen("C:\\Users\\my_code\\output.in", "w", stdout);
 #endif
            map<string, string> m;
            int n;
            cin >> n;
            for (size_t i = 0; i < n; i++)
            {
                string s1, s2;
                cin >> s1 >> s2;
                if(m[s1]==""){
                    m[s2] = s1;
                }
                else{
                    m[s2] = m[s1];

                }
                m.erase(s1);
            }
            cout << m.size() << endl;
            for(auto i:m){


                // pt
                cout << i.second;
                cout << " ";
                cout << i.first;
                nl
            }

            return 0;
}

/*
  Documentation:
   


*/