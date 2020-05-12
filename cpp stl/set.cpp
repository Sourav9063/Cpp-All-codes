//                      Name: set
#include<bits/stdc++.h>
using namespace std;

#define lli long long int //lld
#define ulli unsigned long long int //llu
#define db double //lf
#define Ld long double //Lf

#define pt cout<<"*"<<endl;
#define nl cout<<endl;

#define s2f(a,b) scanf("%d%d",&a,&b)
#define s3f(a,b,c) scanf("%d%d%d",&a,&b,&c)

#define pb(a) push_back(a);
#define all(x)   (x).begin(),(x).end()
#define Sort(x)  sort(all((x)))
#define rSort(x) sort((x).rbegin(),(x).rend())

#define Sourav ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

template <class T>inline void sarray(T* st, T* nd) {while (st < nd)cin >> *st++;/*sf("%d", st++);*/}
template <class T>inline void parray(T* st, T* nd) {while (st < nd)cout << *st++ << endl;/*sf("%d", st++);*/}

int main()
{
	Sourav;
 #ifndef ONLINE_JUDGE
			freopen("C:\\Users\\my_code\\input.in", "r", stdin); 
			freopen("C:\\Users\\my_code\\output.in", "w", stdout);
 #endif


	set<int,greater<int>> s; //reverse sorted // or, set<int ,__greater>s;


	s.insert(10);
	s.insert(10);
	s.insert(100);
	s.insert(11);
	s.insert(12);

	for (const auto& i:s )
	{
		cout<<i<<endl;
	}
	// or use iterator
s.insert(1000);
cout<<"using iterator"<<endl;
	set<int>::iterator it;
	for(it=s.begin();it!=s.end();it++)
	{
		cout<<*it<<endl;
	}
	
	set<int >s2(s.begin(),s.end()); //coping

	//same iterator can be used
cout<<"s2"<<endl;
//cout<<s2[0]<<endl; eta kora jabe na
	for (it=s2.begin();it!=s2.end();it++)
	{
		cout<<*it<<endl;
	}
s2.erase(12);
cout<<"s.erase(12)"<<endl;
for (it=s2.begin();it!=s2.end();it++)
	{
		cout<<*it<<endl;
	}
	
s2.insert(1000);s2.insert(134);

cout<<"print rev"<<endl;

 for(auto i=s2.rbegin();i!=s2.rend();i++)
 {
	 cout<<*i<<endl;
 }


 cout<<"dlt every thing to 134"<<endl;
 s2.erase(s2.begin(),s2.find(134));
 //        sstart pos , koy ghor jabe;

 for(auto i=s2.begin();i!=s2.end();i++)
 {
	 cout<<*i<<endl;
 }

return 0;
 }

/*
	Documentation
	unique value accending order e
*/
/*
Number of digits in N =floor(log10(N)) + 1;
n = n << 1;   // Multiply n with 2
n = n >> 1;   // Divide n by 2
*/
