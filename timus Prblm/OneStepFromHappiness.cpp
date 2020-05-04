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

bool check(int n)
{
	int s1 = 0, s2 = 0;
	for (int i = 1; i <= 3; i++)
	{
		s1 += n % 10;
		n /= 10;
	}
	for (int i = 1; i <= 3; i++)
	{
		s2 += n % 10;
		n /= 10;
	}

	return s1 == s2;
}





int main()
{
	Sourav;

	int n;
	cin >> n;


	if (check(n + 1) || (n - 1))cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}

/*
	Documentation

*/
/*
Number of digits in N =floor(log10(N)) + 1;
n = n << 1;   // Multiply n with 2  use >> for div
*/
