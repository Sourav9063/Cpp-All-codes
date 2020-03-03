		// Name: cutribon
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

const double pie= 2*acos(0.0);
const long long mxl= 1000000007;

template <class T>inline void sarray(T* st, T* nd){while(st<nd)cin>>*st++;/*sf("%d", st++);*/}

template <class T>inline void parray(T* st, T* nd){while(st<nd)cout<<*st++<<endl;/*sf("%d", st++);*/}



// int main()
// {
// 	int n, a[3]; sif(n);
// 	int flag = 0;
// 	s3f(a[0], a[1], a[2]);
// 	sort(a, a + 3);

// 	if((a[1]+a[0]+a[2])==n)
// 	{pf("3");
		
// 	}
// 	// else if(__gcd(a[1],a[2])==a[0])
// 	// {
// 	// 	pif(n/a[0]);
// 	// }
// 	else if((a[1]+a[0])==n)
// 	{
// 		pf("2");
// 		//pif((n/a[2])*2);
// 	}
//     else if(a[0]==1)
//     {
//     	pif(n);
    	
//     }
//    // else if(a[1]==a[2])
//    //  {
//    //  	pif((n/(a[0]+a[2]))*2);
//    //  }
//    //  else if(a[0]==a[1]&&a[1]==a[2]&&n==a[0])
//    //  {
//    //  	pif(n);

//    //  }
//    //  else if(a[0]==a[1]&&a[1]==a[2])
//    //  {
//    //  	pif((n/a[1])*3);

//    //  }
// else if((a[1]+a[0]+a[2])*2<=n)
// {
//   pif(n/a[0]);
// }


// nl;
// 	return 0;


// }

// /*
// 	Documentation
	
// */


// /* Assign vector 
//     vector<int> v; 
  
//      fill the array with 10 five times 
//     v.assign(5, 10); 

//      // inserts 5 at the beginning 
//     v.insert(v.begin(), 5);


//     // removes the first element 
//     v.erase(v.begin());  

//        // erases the vector 
//     v.clear();

//      // inserts at the beginning and extends the vector 
//     v.emplace(v.begin(), 5); 
// */


#include<bits/stdc++.h>
using namespace std;

int n,s;
int a[3];
int val,m=-1;
int dp(int n)
{
    if(n==0)
        return 0;
    for(int i=0;i<3;i++)
    {
    	//
        if(n>=a[i])
        {
            val=1+dp(n-a[i]);
            pif(val);pt;
            pif(i);pt;pt;
        }
    }
    if(val>m)
        m=val;
    return m;
}

int main()
{
    scanf("%d %d %d %d",&n,&a[0],&a[1],&a[2]);
    cout<<dp(n)<<endl;
    return 0;
}
