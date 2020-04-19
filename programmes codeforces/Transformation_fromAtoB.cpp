#include<bits/stdc++.h>
using namespace std;
// __int64 variable; cin cout diye
// __uint64 variable;
#define lli long long int //lld
#define ulli unsigned long long int //llu
#define db double //lf
#define Ld long double //Lf
#define pf printf
#define sf scanf
#define nl printf("\n")
#define plf(a) printf("%lld",a)
#define slf(b) scanf("%lld",&b)
#define puf(a) printf("%llu",a)
#define suf(b) scanf("%llu",&b)
#define pif(a) printf("%d",a)
#define sif(b) scanf("%d",&b)
#define pff(a) printf("%f",a)
#define sff(b) scanf("%f",&b)
#define pLf(a) printf("%Lf",a)
#define sLf(b) scanf("%Lf",&b)
#define pdf(a) printf("%lf",a)
#define sdf(b) scanf("%lf",&b)

#define pb(a) push_back(a);



const double pie = 2 * acos(0.0);
const long long mxl = 1000000007;

vector<bool> v;

vector<vector<int>>g;
vector<vector<int>>c;



int main()
{
	stack<lli> s;
	int flag = 0;
	lli a, b;
	slf(a);
	slf(b);
	s.push(b);
	while (b >= a) {

		if ((b % 10) == 1) {b = b / 10; s.push(b);}
		else if (b % 2 == 0) {b /= 2; s.push(b);}
		else
		{
			break;
		}


		if (b == a)
		{
			flag = 1;
			break;


		}

	}

	if (flag)
	{
		pf("YES"); nl;
		cout  << s.size() << endl;
		while (!s.empty())
		{
			lli n = s.top();
			s.pop();
			plf(n); pf(" ");

		}
	}
	else pf("NO");



	return 0;

}
