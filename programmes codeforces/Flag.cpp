//                      Name: Flag
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



#define f1 for(i=0;i<n;i++)
#define f2 for(j=0;j<m;j++)

int main()
{
	int m, n, i, f = 0, j;
	cin >> n >> m;
	char a[n][m];
	f1
	{
		f2{
			cin >> a[i][j];
			// cout<<a[i][j];
		}
		// cout<<endl;
	}
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < m - 1; j++)
		{
			//cout<<i<<" "<<j<<endl;
			// cout<<a[i][j]<<" "<<a[i+1][j]<<" ";
			if ((a[i][j] != a[i][j + 1]) || (a[i][j] == a[i + 1][j]))
			{
				f = 1;
				break;
			}
		}
		if (f == 1)
			break;
		if (a[i][j] == a[i + 1][j])
		{
			f = 1;
			break;
		}
	}

	if (f)
		cout << "NO\n";
	else
	{
		for (j = 0; j < m - 1; j++)
		{
			if (a[i][j] != a[i][j + 1])
			{
				f = 1;
				break;
			}
		}
		cout << (f ? "NO" : "YES") << endl;
	}
}

/*
	Documentation
	normal check;
*/
/*
Number of digits in N =floor(log10(N)) + 1;
n = n << 1;   // Multiply n with 2
n = n >> 1;   // Divide n by 2
*/
