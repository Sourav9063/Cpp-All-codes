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



int main()
{
    int  n,ans=0,flag=0;
    sif(n);
    ulli a[n];
    suf(a[0]);

    for(int i=1; i<n; i-=-1)
    {
        suf(a[i]);

        if(a[i-1]<=a[i])
        {
            flag++;
            //pif(flag);
           // nl;
        }
        else
        {

            if(ans<=flag)
            {
                ans=flag;
            }
         flag=0;


        }

    }

if(ans>=flag)pif(ans+1);
else pif(flag+1);
    nl;



}

