//                      Name:
#include<bits/stdc++.h>
using namespace std;

#define lli long long int //lld
#define ulli unsigned long long int //llu
#define db double //lf
#define Ld long double //Lf

#define pt cout<<"*"<<endl;
#define nl cout<<endl;

#define s2f(a,b) scanf("%d%d",&a,&b)
#define s3f(a,b,c) scanf("%d%d%d",&a,&b,&c)

#define pb(a) push_back(a);
#define all(v) v.begin(),v.end()

#define Sourav ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

template <class T>inline void sarray(T* st, T* nd) {while (st < nd)cin >> *st++;/*sf("%d", st++);*/}
template <class T>inline void parray(T* st, T* nd) {while (st < nd)cout << *st++ << endl;/*sf("%d", st++);*/}

int main()
{
	Sourav;

	int n;
	cin >> n;
	string s[n];
	bool f = false;
	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
		if (!f) {
			if (s[i][0] == 'O' && s[i][1] == 'O')
			{
				f = true;
				s[i][0] = '+';
				s[i][1] = '+';
			}
			else if (s[i][3] == 'O' && s[i][4] == 'O')
			{
				f = true;
				s[i][3] = '+';
				s[i][4] = '+';
			}
		}
	}

	if (f)
	{
		cout << "YES" << endl;
		for (int i = 0; i < n; ++i)
		{
			cout << s[i] << endl;
		}
	}
	else
	{
		cout << "NO" << endl;
	}
	//cout << s[2][2];
	return 0;
}

/*
	Documentation

*/
/*
Number of digits in N =floor(log10(N)) + 1;
n = n << 1;   // Multiply n with 2
n = n >> 1;   // Divide n by 2
*/
