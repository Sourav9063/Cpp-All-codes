//                      Name: card construction
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
//map<lli, bool>m;
vector<lli> v;
int main()
{
	Sourav;
	// for (ulli i = 1; i <= 10000; i++)
	//
	// 	int in = (i * (i - 1) * 3) / 2 + i * 2;
	// 	//m[in] = 1;
	// 	v.push_back(in);
	// 	//cout << (i * (i - 1) * 3) / 2 + i * 2 << endl;
	// }


	// for (int i = 0; i <= 1000; i++)
	// {
	// 	cout << vAns[i]; nl;

	// 	//cout << (i * (i - 1) * 3) / 2 + i * 2 << endl;
	// }

	//cout << v[v.size() - 1] << endl;



	int t;
	cin >> t;
	while (t--)
	{
		lli nk;
		cin >> nk;
		lli n = nk;
		lli ans = 0;
		while (n >= 2) {

			lli hOfP = (sqrt(1 + 24 * n) - 1) / 6;



			//cout << hOfP << endl;

			lli neededCard = (3 * hOfP * (hOfP - 1) ) / 2 + hOfP *
			                 //cout << neededCard << endl; pt;

			                 if (neededCard == n)
			{
				ans++;
				break;
			}
			else if (neededCard < n)
			{
				n = n - neededCard;
				ans++;
				//	cout << n ; pt;
				//break;
			}
			else
				break;


		}





		// for (lli i = 0;; i++)
		// {
		// 	if (v[i] == n || n < v[0])
		// 	{
		// 		if (v[i] == n)ans++;
		// 		break;
		// 	}

		// 	if (v[i] > n)
		// 	{
		// 		n = n - v[i - 1];
		// 		ans++;
		// 		i = 0;
		// 	}

		// }


		cout << ans << endl;

//	return 0;

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

/*
int power_x(int x, unsigned y)
{
    if(y==0)
        return 1;
    if(!(y&1))
        return power_x(x,y>>1)*power_x(x,y>>1);
    return x*power_x(x,y>>1)*power_x(x,y>>1);
}

*/