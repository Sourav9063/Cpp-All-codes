//                      Name:  A and B and Compilation Errors
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

	int n;
	cin >> n;
	int arr[n] = {0};
	sarray(arr, arr + n);
	//bitset<10000000>se;

	// vector<int> tmp;
	// for (int i = 0; i < n; ++i)
	// {
	// 	tmp[arr[i]] = 1;

	// }
	// int tmpp;
	// for (int i = 0; i < n - 1; ++i)
	// {
	// 	//int tmpp;
	// 	cin >> tmpp;
	// 	tmp[tmpp]++;
	// }
	// for (int i = 0; i < n - 2; ++i)
	// {

	// 	cin >> tmpp;
	// 	tmp[tmpp]++;
	// }
	// int tmp1, tmp2;
	// for (int i = 0; i < n; ++i)
	// {
	// 	if (tmp[arr[i]] == 1)tmp1 = tmp[arr[i]];
	// 	if (tmp[arr[i]] == 2)tmp2 = tmp[arr[i]];
	// }
	// cout << tmp1 << endl;
	// cout << tmp2 << endl;
	sort(arr, arr + n);

	int arr1[n - 1];
	sarray(arr1, arr1 + (n - 1));
	sort(arr1, arr1 + (n - 1));
	int arr2[n - 2];
	sarray(arr2, arr2 + (n - 2));
	sort(arr2, arr2 + (n - 2));
	//parray(arr1, arr1 + (n - i));
	for (int i = 0; i < n ; ++i)
	{
		if (arr[i] != arr1[i]) {cout << arr[i] << endl; break;}
	}
	for (int i = 0; i < n ; ++i)
	{
		if (arr1[i] != arr2[i]) {cout << arr1[i] << endl; break;}
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
