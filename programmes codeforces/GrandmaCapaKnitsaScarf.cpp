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

int main()
{
Sourav;

 #ifndef ONLINE_JUDGE
            freopen("C:\\Users\\my_code\\input.in", "r", stdin); 
            freopen("C:\\Users\\my_code\\output.in", "w", stdout);
 #endif


 ll t;
 cin>>t;
    while(t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        unordered_map<char, int>mp;
        for (size_t i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
        }
        // string s; cin>>n>>s;
		ll ans=INT64_MAX;
		for(auto i:mp)
        {
            ll cnt = 0, l = 0, r = n - 1;
			while(1)
			{
                // deb(i.first)
                //     deb(s)
                    if (s[l] == s[r]) l++, r--;
				else if(s[l]==i.first)	cnt++, l++;
				else if(s[r]==i.first)	cnt++, r--;
				else{
					cnt=INT64_MAX;
					break;
				}	
				if(l>r)	break;
			}
			ans=min(ans,cnt);
		}
		if(ans==INT64_MAX)	ans=-1;
		cout<<ans<<endl;	


    }  





  return 0;
}

/*
  Documentation:
   


*/