//                      Name: https://codeforces.com/problemset/problem/978/A
#include <bits/stdc++.h>
using namespace std;

#define Sourav                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
int tmp;
int main()
{
    Sourav;


    int n;
    cin >> n;
    map<int ,int>m1;
    map<int,int>m2;
 for (int i = 1; i <= n; i++)
    {

        cin>>tmp;
      
        m1[tmp]=i;
 
    }

  for (auto it:m1 )
  {
      m2.insert(make_pair(it.second,it.first));
  }
  
  cout<<m2.size()<<endl;
    for (auto it:m2)
    {
        cout<<it.second<<" ";
    }
        

}

/*
  Documentation:
   


int power_x(int x, unsigned y)
{
    if(y==0)
        return 1;
    if(!(y&1))
        return power_x(x,y>>1)*power_x(x,y>>1);
    return x*power_x(x,y>>1)*power_x(x,y>>1);
}

*/