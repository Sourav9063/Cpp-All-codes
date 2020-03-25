// Name: Start up
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
	char palin[] = "AHIMOTUVWXY";
	string a;
	int flag = 0;

	cin >> a;

	int n = a.size();
	if (a.size() == 1)
	{
		for (int j = 0; j < size(palin); j++)
		{
			if (a[0] == palin[j])
			{

				flag = 1;
				break;
			}
		}
	}
	// else	if (a.size() == 2)
	// {
	// 	if (a[0] == a[1])
	// 	{
	// 		flag = 1;

	// 	}
	// }
	else
	{
		for (int i = 0, j = n - 1; i <= j; i++, j--)
		{
			if (a[i] == a[j] && (a[i] == palin[0] || a[i] == palin[1] || a[i] == palin[2] || a[i] == palin[3] || a[i] == palin[4] || a[i] == palin[5] || a[i] == palin[6] || a[i] == palin[7] || a[i] == palin[8] || a[i] == palin[9] || a[i] == palin[10]))
			{
				flag = 1;

			}
			else
			{
				flag = 0;
				break;
			}
		}
	}



	pf(flag ? "YES" : "NO");
	nl;

	return 0;
}

/*
	Documentation
	palindrome
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