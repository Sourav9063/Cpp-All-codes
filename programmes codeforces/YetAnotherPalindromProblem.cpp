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
#define fr1(n) for(int i=1;i<n;i++)


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
		int n;
		sif(n);
		int arr[n];
		int flag = 0;
		int flagJ = 1;
		fr(n)
		{
			sif(arr[i]);

		}
		for (int i = 0; i < n; i++)
		{
			if (arr[i] == arr[i + 2])
			{
				// pif(i);
				// pt;
				flag = 1;
				break;
			}

			if (arr[i] == arr[i + 1])
			{
				// int j = i + i;
				// while (arr[i] == arr[j])
				// {
				// 	j++;
				// 	if (j == n - 1)
				// 	{
				// 		flagJ = 0;
				// 		break;
				// 	}
				// 	//pif(j); pt;
				// }

				// if (flagJ)
				// {	if (arr[i - 1] == arr[j])
				// 	{
				// 		//pif(arr[i - 1]); pif(arr[j]);
				// 		flag = 1;
				// 		break;
				// 	}
				// }
				if (arr[i + 1] == arr[i + 2])
				{
					flag = 1;
					break;

				}
				else	if (arr[i - 1] == arr[i + 2])
				{
					flag = 1;
					break;

				}





			}
		}

		if ( flag)pf("YES");
		else
			pf("NO");


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