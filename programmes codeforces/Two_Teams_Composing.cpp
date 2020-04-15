//                      Name:Two Teams Composing
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


	int t;
	cin >> t;
	while (t--)
	{
		// int n;
		// cin >> n;

		// vector<int> arr;

		// //sarray(arr, arr + n);
		// for (int i = 0; i < n; i++)
		// {
		// 	int tmp;
		// 	cin >> tmp;
		// 	arr.push_back(tmp);
		// }

		// int uniqueEl =	set<int>(all(arr)).size();

		// //	cout << uniqueEl << endl;

		// sort(all(arr));

		// int longUn = 0;
		// for (int i = 0; i < n;)
		// {	//cout << arr[i] << endl;
		// 	int j = i + 1;

		// 	while (arr[i] == arr[j])
		// 	{
		// 		j++;
		// 		//pt;
		// 	}
		// 	int tmpp = j - i;
		// 	if (j > i + 1)i = j;
		// 	else if (j == i + 1)i++;


		// 	longUn = max(longUn, tmpp);



		// }
		// //cout << longUn << endl;

		// //	parray(arr, arr + n);

		// // if (longUn == n / 2 || longUn == (n / 2) + 1)
		// // {
		// // 	cout << n / 2 << endl;
		// // }
		// // else
		// if (longUn <= n / 2 + 1)
		// {
		// 	cout << longUn << endl;
		// }

		// else
		// {
		// 	cout << uniqueEl << endl;
		// }

		int n, a, viz[200000] = {0};
		cin >> n;
		int mx = 0, x = 0;

		for (int i = 1; i <= n; i++) {
			cin >> a;
			viz[a]++;
			if (viz[a] == 1)x++;
			mx = max(mx, viz[a]);
		}
		cout << max(min(x - 1, mx), min(x, mx - 1)) << '\n';

		nl;
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
