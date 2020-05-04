//                      Name: fench
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
	int ans = 1;
	int arr[n + 1] = {0};
	int sum = 0;
	if (k == 1)
	{
		cin >> arr[1];
		ans = 1;
		for (int i = 2; i <= n; i++)
		{
			cin >> arr[i];
			if (arr[i] < arr[ans])
			{
				ans = i;
				//cout << i; pt;
			}
			if (arr[i] == 1)
			{
				ans = i; break;
			}
		}
	}
	else {
		for (int i = 1; i <= k; i++)
		{
			cin >> arr[i];
			sum += arr[i];

		}
		int s2 = sum;
		//	cout << sum ; pt;
		if (sum == k)
		{
			cout << 1 << endl; return 0;
		}
		for (int i = k + 1; i <= n; i++)
		{
			cin >> arr[i];

			s2 = s2 - arr[i - k] + arr[i];
			if (s2 < sum)
			{	//pt;
				sum = s2;
				ans = i - k + 1;
			}

			//cout << s2 << " " << arr[i - k] << " " << arr[i]; pt;
		}

	}
	cout << ans << endl;
	return 0;
}

/*
	Documentation
	input er somoy e
*/
/*
Number of digits in N =floor(log10(N)) + 1;
n = n << 1;   // Multiply n with 2  use >> for div
*/
