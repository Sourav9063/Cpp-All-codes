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
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;
  //  cout<<s1<<" "<<s2<<"\n";
    stack<char> s1s;
    stack<char>s2s;
    for (auto s : s1) {
      // deb(s);
      s1s.push(s);
    }
    for (auto s : s2) {
      s2s.push(s);
    }
    // cout<<s1s.size()<<" "<<s2s.size()<<"\n";
    if (s1.size() < s2.size()) {
      cout << "NO" << endl;
    }
    else {
      while (!s1s.empty()) {
        if (s1s.top() == s2s.top()) {
          s1s.pop();
          s2s.pop();
          if (s2s.empty())break;
        }
        else {
          s1s.pop();
          if(s1s.empty())break;
          s1s.pop();
        }
      }
      if (s2s.empty()) {
        cout << "YES" << endl;
      }
      else {
        cout << "NO" << endl;
      }
    }


  }




  return 0;
}

/*
  Documentation:



*/