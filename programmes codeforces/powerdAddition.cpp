//                      Name: https://codeforces.com/problemset/problem/1338/A
#include <bits/stdc++.h>
using namespace std;

#define ll long long int           //lld
#define ull unsigned long long int //llu

#define pt cout << "*" \
                << "\n";
#define nl cout << "\n";
#define deb(x) cout << #x << "=" << x << "\n";

#define pb(a) emplace_back(a)
#define all(x) (x).begin(), (x).end()
#define rSort(x) sort((x).rbegin(), (x).rend())

#define Sourav                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

//template<typename... T>void read(T&... args) {((cin >> args), ...);}
template <class T>
inline void sarray(T *st, T *nd)
{
    while (st < nd)
        cin >> *st++; /*sf("%d", st++);*/
}
template <class T>
inline void parray(T *st, T *nd)
{
    while (st < nd)
        cout << *st++ << endl; /*sf("%d", st++);*/
}
ll tmp, ans;

int main()
{
    Sourav;

#ifndef ONLINE_JUDGE
    freopen("C:\\Users\\my_code\\input.in", "r", stdin);
    freopen("C:\\Users\\my_code\\output.in", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {

        ll n, k;
        cin >> n;
      ll c = 0;
     
      ll  mx = LONG_LONG_MIN;
     ll   z = LONG_LONG_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> k;
            z = max(z, mx - k);
            mx = max(mx, k);
        }

        while (z > 0)
        {
            c++;
            z /= 2;
        }

        cout << c << endl;
    }

    return 0;
}

/*
  Documentation:
   long long t,rr,i,k,mx,z,c;
	
	scanf("%lld",&t);
	for(rr=0;rr<t;rr++)
	{
		scanf("%lld",&n);
		mx=-inf;
		z=-inf;
		for(i=1;i<=n;i++)
		{
			scanf("%lld",&k);
			z=max(z,mx-k);
			mx=max(mx,k);
		}
		for(c=0;z>0;z/=2,c++);
		printf("%lld\n",c);
	}


int power_x(int x, unsigned y)
{
    if(y==0)
        return 1;
    if(!(y&1))
        return power_x(x,y>>1)*power_x(x,y>>1);
    return x*power_x(x,y>>1)*power_x(x,y>>1);
}

*/