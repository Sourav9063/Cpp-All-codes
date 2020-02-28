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
int main()
{
    int n1,n2;
    cout<<"total number of operand="<<endl;
    cin>>n1;
    cout<<"total number of operator="<<endl;
    cin>>n2;
    char a[n1+n2+5];
    getchar();
    gets(a);
    int s[n1],x=0,r;
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]>='0'&&a[i]<='9')
        {
            s[x]=a[i]-'0';
            x++;
        }
        else
        {
            if(a[i]=='+')
            {
                r=s[x-2]+s[x-1];
                s[x-2]=r;
                x=x-1;
            }
            else if(a[i]=='-')
            {
                r=s[x-2]-s[x-1];
                s[x-2]=r;
                x=x-1;
            }
            else if(a[i]=='*')
            {
                r=s[x-2]*s[x-1];
                s[x-2]=r;
              x=x-1;
            }
            else if(a[i]=='/')
            {
                r=s[x-2]/s[x-1];
                s[x-2]=r;
                x=x-1;
            }
            else if(a[i]=='^')
            {
                r=pow(s[x-2],s[x-1]);
                s[x-2]=r;
                x=x-1;
            }
        }
    }
    cout<<s[1]<<endl;
}

