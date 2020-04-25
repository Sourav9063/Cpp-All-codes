//                      Name: Olesya and Rodion
#include<bits/stdc++.h>
using namespace std;

#define lli long long int //lld
#define ulli unsigned long long int //llu
#define db double //lf
#define Ld long double //Lf
#define pf printf
#define sf scanf

#define pt cout<<"*"<<endl;
#define nl cout<<endl;

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
	lli n, t;
	cin >> n >> t;
	ulli tmp = 1;
	if (n <= 19)
	{
		for (int i = 1; i <= n; i++)
		{
			tmp *= 10;
		}
		tmp -= 1;
		//cout << tmp; pt;
		if ((tmp / t)*t != 0 )
			cout << (tmp / t)*t << endl;
		else
			cout << "-1" << endl;
	}
	else
	{	if (t < 10) {
			for (int i = 1; i <= n; i++)
			{
				cout << t;
			}
			nl;
		}
		else {
			{	for (int i = 1; i < n; i++)
				{
					cout << 1;
				}
				cout << "0" << endl;
			}
		}
	}
	return 0;

}

/*
	Documentation
	n+1 digt er num toyri kore -1 korbo
	tare t diya vag kor
	ans hobe vagfol*t
	***100 digit hoy na evabe

*/
/*
Number of digits in N =floor(log10(N)) + 1;
n = n << 1;   // Multiply n with 2
n = n >> 1;   // Divide n by 2
*/
