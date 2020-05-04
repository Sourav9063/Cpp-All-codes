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

#define pb(a)    emplace_back(a)
#define all(x)   (x).begin(),(x).end()
#define Sort(x)  sort(all((x)))
#define rSort(x) sort((x).rbegin(),(x).rend())

#define Sourav ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

template <class T>inline void sarray(T* st, T* nd) {while (st < nd)cin >> *st++;/*sf("%d", st++);*/}
template <class T>inline void parray(T* st, T* nd) {while (st < nd)cout << *st++ << endl;/*sf("%d", st++);*/}

int main()
{
	Sourav;

	int i, seg = 0, tri = 0, j, k, sum;
	int ara[4];
	for (i = 0; i < 4; i++)
	{
		cin >> ara[i];
	}
	sort(ara, ara + 4);
	for (i = 0; i <= 1; i++)
	{
		for (j = i + 1; j <= 2; j++)
		{
			for (k = i + 2; k <= 3; k++)
			{	if (j == k) continue;
				sum = ara[i] + ara[j];
				//cout<<ara[i]<<" "<<ara[j]<<" "<<ara[k]<<endl;
				if (sum > ara[k]) tri++;
				else if (sum == ara[k]) seg++;
			}
		}

	}

	if (tri > 0) cout << "TRIANGLE";
	else if (seg > 0) cout << "SEGMENT";
	else cout << "IMPOSSIBLE";

	return 0;


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
