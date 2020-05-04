//                      Name: Sereja and Suffixes
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

vector<ulli>vPrime;

void seive()
{
	ulli n = 100000;
//suf(n);
	bitset<10000000>arr;
	arr.flip();
	arr[1] = 0;
	for (ulli p = 2; p * p <= n; p++)
	{
		if (arr[p])
		{
			for (ulli i = p * p; i <= n; i += p)
			{
				arr[i] = 0;
			}
		}
	}
// parray(arr,arr+(n+1));
	for (ulli p = 1; p <= n; p++)
	{
		if (arr[p])
		{
			vPrime.pb(p);
//puf(p);nl;
		}
	}
}


int main()
{
	Sourav;
//lets take an arr
	int arr[200005] = {0};

	int n, m;
	cin >> n >> m;
	int input[n];
	int ansRs[n] = {0};
	for (int i = 0; i < n; i++)
	{
		cin >> input[i];
		arr[input[i]]++;
	}
	bitset<200005>arrT;
	arrT.flip();
	int l; int ans = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		if (arr[input[i]] > 0 && arrT[input[i]]) {ans++; arrT[input[i]] = 0;}
		ansRs[i] = ans;
	}

	//parray(ansRs, ansRs + n);


	while (m--)
	{

		cin >> l;


		cout << ansRs[l - 1] << endl;
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
