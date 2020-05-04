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

	int n;
	cin >> n;
	lli arr[n + 1] = {0};

	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
		arr[i] += arr[i - 1];
	}
	lli x = arr[n] / 3, a = 0, b = 0;
	if (x * 3 != arr[n])
	{
		cout << "0" << endl;
		return 0;
	}
	for (int i = 1; i < n; i++)
	{
		if (arr[i] == x * 2)b += a;
		if (arr[i] == x)a++;
	}
	cout << b << endl;


	return 0;
}

/*
	Documentation

*/
/*
Number of digits in N =floor(log10(N)) + 1;
n = n << 1;   // Multiply n with 2  use >> for div
*/
