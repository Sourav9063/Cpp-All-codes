//                      Name: 1 10 100 1000
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
	bool space = false;

	int t;
	cin >> t;
	while (t--)
	{
		lli k;
		cin >> k;


		lli        n = (-1 + sqrt(double(8 * k - 7))) / 2.0; //n*(n+1)/2 =k

		if (space)cout << ' '; space = true;

		if (k == n * (n + 1) / 2 + 1) cout << '1';
		else cout << '0';




	}

	nl;

	return 0;
}

/*
	Documentation

*/
/*
Number of digits in N =floor(log10(N)) + 1;
n = n << 1;   // Multiply n with 2  use >> for div
*/
