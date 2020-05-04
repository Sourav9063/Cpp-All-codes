//                      Name: Pashmak and Flowers
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

	lli n;
	cin >> n;
	lli arr[n];
//	static int flag[10000000] = {0};
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		//flag[arr[i]]++;
	}
	sort(arr, arr + n);
	//parray(arr, arr + n);
	lli tmp = arr[n - 1] - arr[0];
	lli tmp1 = 1;
	lli tmp2 = 1;
	for (int i = 1, j = n - 2;; i++, j--)
	{
		bool f1 = false, f2 = false;
		if (arr[0] == arr[i])tmp1++;
		else
			f1 = true;
		if (arr[n - 1] == arr[j])tmp2++;
		else
			f2 = true;

		if (f1 && f2)break;

	}
	if (tmp == 0)cout << tmp << " " << (tmp2 * tmp1) / 2 - n / 2 << endl;
	else
		cout << tmp << " " << tmp2*tmp1 << endl;


	return 0;
}

/*
	Documentation

*/
/*
Number of digits in N =floor(log10(N)) + 1;
n = n << 1;   // Multiply n with 2  use >> for div
*/
