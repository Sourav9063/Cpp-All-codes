//                      Name: Little Elephant and Bits
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

	string s;
	cin >> s;
	int siz = s.size();
	//cout << s[siz - 3] ; pt;
	// if (s[siz - 1] == '0' && s[siz - 2] == '1' && s[siz - 3] == '0')
	// {
	// 	//pt;
	// 	s.erase(siz - 4, 3);
	// 	s += "10";
	// 	cout << s << endl;

	// }
	// else	{
	bool f = false;
	for (int i = 0; i < siz; i++)
	{
		if (s[i] == '0')
		{	f = true;
			s.erase(i, 1);
			break;

		}
	}

	if (f)cout << s << endl;
	else {
		s.erase(siz - 1, 1);
		cout << s << endl;
	}

//	}

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