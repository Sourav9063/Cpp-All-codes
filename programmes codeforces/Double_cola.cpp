//                      Name:
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
	string s[7];
	s[1] = "Sheldon"; s[2] = "Leonard"; s[3] = "Penny"; s[4] = "Rajesh";// s[6] = "Howard";
	int tmp = 5; int i = 1;
	s[5] = "Howard";
	int tmpp = 5;
	//int flag = 1;
	// for (i = 1;; i++)
	// {

	// 	//cout << tmp; nl;
	// 	if (n <= tmp)
	// 	{
	// 		//flag = 0;

	// 		break;
	// 	}

	// 	else {tmpp = tmp;}
	// 	tmp += (tmp << 1);

	// 	cout << tmpp; nl;

	// }

	// cout << i; pt;
	// int cal = n - tmpp;
	// cout << cal;
	while (n > 5)
	{
		n = n / 2 - 2;
	}
	cout << s[n] << endl;
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
