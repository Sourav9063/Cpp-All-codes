// Name:  K-th Beautiful String
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
	lli t;
	slf(t);
	while (t--)
	{
		lli n, k;
		slf(n);
		slf(k);

		string	s(n, 'a');
		//	memset(s, 'a', n);
		//	cout << s[n]; pt;
		lli tmp = (n * (n - 1)) / 2;
		if (k == 1)
		{
			s[n - 2] = 'b';
			s[n - 1] = 'b';
		}
		else if (k == tmp)
		{
			s[0] = 'b';
			s[1] = 'b';
		}
		else
		{
			lli pose1b = (1 + sqrt(8 * k)) / 2;
			//pif(pose1b); nl;
			lli tmp1pos = pose1b ;


			pose1b = n - pose1b - 1;

			s[pose1b] = 'b';

			lli tmp2 = (tmp1pos * (tmp1pos - 1)) / 2 ;

			lli 	pose2b = k - tmp2;
			pose2b = n - pose2b;
			//pif(tmp2); pt;


			// pose2b += (n - pose1b);
			// pose2b--;
			// if (pose2b == pose1b)
			// 	pose2b = 1;

			// pif(pose1b); pt;
			// pif(pose2b); nl;
			s[pose2b] = 'b';

		}

		cout << s << endl;



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