
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

const double pie= 2*acos(0.0);
const long long mxl= 1000000007;


int cmpre=0,swp=0;

int main()
{
    int n;
    cout<<"Array size = ";
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)cin>>a[i];

    int c,s,k;
    for(int k=1; k<n; k++)
    {
        cout<<"pass-"<<k<<endl;
        c=0,s=0;
        for(int i=0; i<n-(k-1); i++)
        {
            c++;
            if(a[i]>a[i+1])
            {
                swap(a[i],a[i+1]);
                s++;
                cout<<"swap here    ->";
                for(int j=0; j<n; j++) cout<<a[j]<<" ";
            }
            else
            {
                cout<<"No swap here ->";
                for(int j=0; j<n; j++) cout<<a[j]<<" ";
            }
            cout<<endl;
        }
        cmpre=cmpre+c;
        swp=swp+s;

        cout<<"compares "<<c<<endl<<"swaps ="<<s<<endl<<"pass end result"<<endl;
        for(int j=0; j<n; j++) cout<<a[j]<<" ";
        cout<<endl<<endl;
    }
    cout<<"Total compares ="<<cmpre<<endl<<"Total swaps ="<<swp<<endl;
    cout<<"final array"<<endl;
    for(int i=0; i<n; i++) cout<<a[i]<<" ";
    cout<<endl;
}
