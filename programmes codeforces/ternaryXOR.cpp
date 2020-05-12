//                      Name:
#include<bits/stdc++.h>
using namespace std;

#define lli long long int //lld
#define ulli unsigned long long int //llu
#define db double //lf
#define Ld long double //Lf

#define pt cout<<"*"<<endl;
#define nl cout<<endl;

#define pb(a)    emplace_back(a)
#define all(x)   (x).begin(),(x).end()
#define Sort(x)  sort(all((x)))
#define rSort(x) sort((x).rbegin(),(x).rend())

#define Sourav ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

template <class T>inline void sarray(T* st, T* nd) {while (st < nd)cin >> *st++;/*sf("%d", st++);*/}
template <class T>inline void parray(T* st, T* nd) {while (st < nd)cout << *st++ << endl;/*sf("%d", st++);*/}

int main()
{
  Sourav;

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s, a(n, '0');
    cin >> s;
    for (int i = 0; i < n; i++) {
      // cout << s[i]; pt;
      if (s[i] == '2') {
        s[i] = '1';
        a[i] = '1';//while no 1 is found;
      }
      else if (s[i] == '1') {
        a[i] = '1';
        s[i] = '0';
        break; //mode er jnno
      }

    }
    cout << a << "\n" << s << "\n";
  }


  return 0;
}

/*
  Documentation

*/
/*
map<lli, bool>m;
  m[1000000000000000000] = 1;


  // loop
  for(auto n:arrayname/anything)
  {

  }
int highest value is LONG_MAX;
Number of digits in N =floor(log10(N)) + 1;
n = n << 1;   // Multiply n with 2  use >> for div
*/

/*
int power_x(int x, unsigned y)
{
    if(y==0)
        return 1;
    if(!(y&1))
        return power_x(x,y>>1)*power_x(x,y>>1);
    return x*power_x(x,y>>1)*power_x(x,y>>1);
}

*/