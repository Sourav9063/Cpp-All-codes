//                      Name: pair
#include <bits/stdc++.h>
using namespace std;

#define lli long long int			//lld
#define ulli unsigned long long int //llu
#define db double					//lf
#define Ld long double				//Lf

#define pt cout << "*" << endl;
#define nl cout << endl;

#define s2f(a, b) scanf("%d%d", &a, &b)
#define s3f(a, b, c) scanf("%d%d%d", &a, &b, &c)

#define pb(a) push_back(a);
#define all(x) (x).begin(), (x).end()
#define Sort(x) sort(all((x)))
#define rSort(x) sort((x).rbegin(), (x).rend())

#define Sourav               \
	ios::sync_with_stdio(0); \
	cin.tie(0);              \
	cout.tie(0);

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
bool sortbysec(const pair<int, int> &a,
			   const pair<int, int> &b) //sort by sec
{
	return (a.second < b.second);
}
//from geekforgeeks
int main()
{
	Sourav;
	pair<string, int> p;
	p.first = "sourav";
	p.second = 63;
	p = make_pair("nabil", 132);
	cout << p.first << " " << p.second << endl;

	vector<pair<string, int>> vP;
	vP.push_back(make_pair("Sourav", 63));
	vP.push_back(make_pair("Adnan", 31));
	cout << vP[0].first;

	sort(vP.rbegin(), vP.rend());
	for (int i = 0; i < vP.size(); i++)
	{
		cout << vP[i].first << " " << vP[i].second << endl;
	}
	sort(vP.rbegin(), vP.rend(), sortbysec);
	return 0;
}

/*
	Documentation
	https://www.youtube.com/watch?v=9dCd_5bYhRg
*/
/*
Number of digits in N =floor(log10(N)) + 1;
n = n << 1;   // Multiply n with 2
n = n >> 1;   // Divide n by 2
*/
