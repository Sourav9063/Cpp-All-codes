// Name: sum of divisors
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

vector<ulli>vPrime;

void seive()
{
    ulli n;

    n = 100000 ;
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
            //puf(p); nl;
        }
    }

}


int main()
{
    seive();
    int input;
    sif(input);
    int  divisorPower[input + 1] = {0};
    int sumOfDivisor = 1;
    int oneSum = 1;

    vector<int>vDivisor;
    int tmpIn = input;


    for (int i = 0; vPrime[i] <= input;)
    {

        if (tmpIn % vPrime[i] == 0)
        {
            divisorPower[vPrime[i]]++;

            //  vDivisor.pb(vPrime[i]);
            tmpIn /= vPrime[i];


            oneSum += pow(vPrime[i], divisorPower[vPrime[i]]);

            //pif(oneSum);pt;
        }

        else
        {


            sumOfDivisor *= oneSum;

            oneSum = 1;

            i++;
        }



    }

    pif(sumOfDivisor);






    return 0;
}

/*
    Documentation
    seive
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
*/