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

#define Sourav ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

template <class T>inline void sarray(T* st, T* nd) {while (st < nd)cin >> *st++;/*sf("%d", st++);*/}
template <class T>inline void parray(T* st, T* nd) {while (st < nd)cout << *st++ << endl;/*sf("%d", st++);*/}
vector<ulli>vPrime;


int main()
{
	Sourav;


	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		int arr[n] = {0};
		int flag[n] = {0};

		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			flag[arr[i]]++;

		}


		sort(arr, arr + n);
		sort(flag, flag + n);
		//	cout << flag[n - 1] << " " << arr[n - 1] << endl;

		int tmpfirst = arr[n - 1];
		bitset<10000>unik;//all 0
		vector<int>uv;

		for (int i = 0; i < n; i++)
		{
			if (unik[arr[i]] == 0) {uv.push_back(arr[i]); unik[arr[i]] = 1;}



		}

		int vecSize = uv.size();

		if ( k < vecSize)cout << "-1" << endl;
		else if (arr[0] == 1)
		{
			cout << (k * flag[n - 1] ) + k << endl;
			for (int i = 0; i <= flag[n - 1]; i++)
			{
				for (int j = -1; j < k - 1; j++)
				{
					cout << tmpfirst - j << " ";
				}
			}
			nl;

		}
		else
		{
			cout << (k * flag[n - 1] ) + k << endl;
			for (int i = 0; i <= flag[n - 1]; i++)
			{
				for (int j = 0; j < k; j++)
				{
					cout << tmpfirst - j << " ";
				}
			}
			nl;
		}





		// //parray(uv, uv + vecSize);
		// for (int i = 0; i < vecSize; i++)
		// {
		// 	cout << uv[i] << endl;
		// } pt;

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
