// Name:
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
	{
		int even = 0, odd = 0, evenMax = 0, oddMax = 0;
		int lenth=0,flagEven=0;
		int n;
		sif(n);
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			sif(arr[i]);

		// 	if (arr[i] % 2)
		// 	{	//odd;
		// 		odd++;
		// 		evenMax = max(even, evenMax);
		// 		even = 0;
		// 	}
		// 	else
		// 	{	//even
		// 		even++;
		// 		oddMax = max(odd, oddMax);
		// 		odd = 0;
		// 	}
		// }

		// if (n == 1)
		// {
		// 	if (odd) {
		// 		pf("-1");
		// 	}
		// 	else
		// 	{
		// 		pf("1");
		// 	}

		// }
		// else if (n == 2)
		// {
		// 	if (odd && even) {
		// 		pf("-1");
		// 	}
		// 	else
		// 	{
		// 		pf("2");
		// 	}
		// }
		// else
		// {	if (even == 0)
		// 		pf("2");
		// 	else 
		// 		pf("1");

		// 	}

			if(arr[i]%2==0)
			{
				flagEven=1;
				lenth=i;
			}
		}

if(flagEven)
{
	pf("1");nl;pif(lenth+1);
}
else if(n>1)
{
	pf("2");nl;
	pf("1 2");
}
else{
	pf("-1");
}




		nl;
	}


	return 0;
}

/*
	Documentation
	any ans is acceptable

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