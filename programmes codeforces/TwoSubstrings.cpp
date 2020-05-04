//                      Name: Two Substrings
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

	string s;
	cin >> s;
	bool arr[s.size()] = {0};
	bool AB = false, BA = false, BAB;

	for (int i = 0; i < s.size(); i++)
	{
		// if (s[i] == 'A' && s[i + 1] == 'B' && !arr[i] && !arr[i + 1])
		// {
		// 	AB = true; arr[i] = true; arr[i + 1] = true;
		// }
		if (s[i] == 'B' && s[i + 1] == 'A' && !arr[i] && !arr[i + 1])
		{
			BA = true; arr[i] = true; arr[i + 1] = true; break;
		}
	}
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'A' && s[i + 1] == 'B' && !arr[i] && !arr[i + 1])
		{
			AB = true; arr[i] = true; arr[i + 1] = true; break;
		}
		// if (s[i] == 'B' && s[i + 1] == 'A' && !arr[i] && !arr[i + 1])
		// {
		// 	BA = true; arr[i] = true; arr[i + 1] = true;
		// }
	}


	if (AB && BA)cout << "YES" << endl;
	else {
		bool arr[s.size()] = {0};
		bool AB = false, BA = false, BAB;

		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == 'A' && s[i + 1] == 'B' && !arr[i] && !arr[i + 1])
			{
				AB = true; arr[i] = true; arr[i + 1] = true; break;
			}
			// if (s[i] == 'B' && s[i + 1] == 'A' && !arr[i] && !arr[i + 1])
			// {
			// 	BA = true; arr[i] = true; arr[i + 1] = true;
			// }
		}
		for (int i = 0; i < s.size(); i++)
		{
			// if (s[i] == 'A' && s[i + 1] == 'B' && !arr[i] && !arr[i + 1])
			// {
			// 	AB = true; arr[i] = true; arr[i + 1] = true;
			// }
			if (s[i] == 'B' && s[i + 1] == 'A' && !arr[i] && !arr[i + 1])
			{
				BA = true; arr[i] = true; arr[i + 1] = true; break;
			}
		}

		if (AB && BA)cout << "YES" << endl;
		else
		{
			cout << "NO" << endl;
		}
	}
//fuck codeforces
	return 0;
}

/*
	Documentation
	use a bool
*/
/*
Number of digits in N =floor(log10(N)) + 1;
n = n << 1;   // Multiply n with 2  use >> for div
*/
