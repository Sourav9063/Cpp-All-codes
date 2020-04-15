//                      Name: Ilya and Bank Account
#include<bits/stdc++.h>
using namespace std;

#define lli long long int //lld
#define ulli unsigned long long int //llu
#define db double //lf
#define Ld long double //Lf
#define pf printf
#define sf scanf

#define nl printf("\n")
#define pt printf(" * \n")

#define s2f(a,b) scanf("%d%d",&a,&b)
#define s3f(a,b,c) scanf("%d%d%d",&a,&b,&c)

#define pb(a) push_back(a);
#define all(v) v.begin(),v.end()

#define max(a, b) ((a) > (b) ? (a) :(b))
#define min(a, b) ((a) < (b) ? (a) :(b))

#define Sourav ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const double pie = 2 * acos(0.0);
const long long mxl = 1000000007;

template <class T>inline void sarray(T* st, T* nd) {while (st < nd)cin >> *st++;/*sf("%d", st++);*/}
template <class T>inline void parray(T* st, T* nd) {while (st < nd)cout << *st++ << endl;/*sf("%d", st++);*/}



int main()
{
	Sourav;

	lli n;
	cin >> n;
	if (n >= 0)cout << n << endl;
	else
	{
		n = -1 * n;
		lli tmpl, tmps;
		tmpl = n % 10;
		tmps = (n % 100 - n % 10) / 10;
		//cout << tmpl << tmps << endl;
		if (tmpl >= tmps)cout << -1 * ( n / 10 ) << endl;
		else
		{
			cout  << -1 * ( ((n / 10) - tmps) + tmpl) << endl;
		}
	}


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
