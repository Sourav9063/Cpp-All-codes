// Name: Exercising Walk
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

#define s2f(a,b) scanf("%d%d",&a,&b)
#define s3f(a,b,c) scanf("%d%d%d",&a,&b,&c)

#define pb(a) push_back(a);
#define all(v) v.begin(),v.end()

#define max(a, b) ((a) > (b) ? (a) :(b))
#define min(a, b) ((a) < (b) ? (a) :(b))

#define fr(n) for(int i=0;i<n;i++)
#define fr1(n) for(int i=1;i<=n;i++)


#define pt printf(" * \n")

const double pie = 2 * acos(0.0);
const long long mxl = 1000000007;

template <class T>inline void sarray(T* st, T* nd) {while (st < nd)cin >> *st++;/*sf("%d", st++);*/}

template <class T>inline void parray(T* st, T* nd) {while (st < nd)cout << *st++ << endl;/*sf("%d", st++);*/}



int main()
{
	int t;
	sif(t);
	while (t--)
	{	int	flag = 1;
		lli aL, bR, cD, dU;
		slf(aL);
		slf(bR);
		slf(cD);
		slf(dU);

		lli x, y, x1, y1, x2, y2;
		slf(x);
		slf(y);
		slf(x1);
		slf(y1);
		slf(x2);
		slf(y2);

		// lli tmpx = x - aL; if (tmpx < x1) {flag = 0; pt;}

		// tmpx += bR; if (tmpx > x2) {flag = 0; pt;}

		// lli tmpy = y - cD; if (tmpx < y1) {flag = 0; pt;}

		// tmpy += dU; if (tmpy > x2) {flag = 0; pt;}

		if ((aL != 0 && bR != 0 && x1 == x2) || (y1 == y2 && dU != 0 && cD != 0)) {flag = 0;}

		lli tmplr =  bR - aL;
		lli tmpud = dU - cD;

		lli tmpx = x + tmplr;
		lli tmpy = y + tmpud;
		//	plf(tmpx); nl; plf(tmpy); nl;



		if (tmpx < x1 || tmpx > x2) {flag = 0;}
		if (tmpy < y1 || tmpy > y2) {flag = 0;}

		pf(flag ? "YES" : "NO");
		nl;

	}


	return 0;
}

/*
	Documentation

*/


/* Assign vector
    vector<int> v;

     fill the array with 10 five times
    v.assign(5, 10);

     // inserts 5 at the beginning
    v.insert(v.begin(), 5);


    // removes the first element
    v.erase(v.begin());

       // erases the vector
    v.clear();

     // inserts at the beginning and extends the vector
    v.emplace(v.begin(), 5);

    // string to int / array to int
    int a=stoi(a); / int a=atoi(a);
*/