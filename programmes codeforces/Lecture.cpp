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
	int n, k;
	cin >> n >> k;

	map<string, string> m;
	for (int i = 0; i < k; i++)
	{
		string s1, s2;
		cin >> s1 >> s2;
		if (s1.size() > s2.size())
		{
			m.insert(make_pair(s1, s2));
		}
		else
		{	m.insert(make_pair(s1, s1));

		}
	}
	for (int i = 0; i < n; i++)
	{
		string tmp;
		cin >> tmp;
		cout << m[tmp] << " ";
	}


	return 0;
}

/*
	Documentation
	string er prblm

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
