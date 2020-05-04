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

	int n; cin >> n;
	int arr[12];
	sarray(arr, arr + 12);
	int ans = 0; int tmp = 0;
	bool f = false;
	if (n == 0)
	{
		cout << ans << endl;
	}
	else {
		sort(arr, arr + 12);

		for (int i = 11; i >= 0; i--)
		{
			tmp += arr[i];
			if (tmp >= n)
			{
				f = true;
				ans = 12 - i;
				break;
			}

		}
		cout << (f ? ans : -1); nl;
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
