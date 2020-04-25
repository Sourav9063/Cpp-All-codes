//                      Name:
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
#define all(v) v.begin(),v.end()

#define Sourav ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

template <class T>inline void sarray(T* st, T* nd) {while (st < nd)cin >> *st++;/*sf("%d", st++);*/}
template <class T>inline void parray(T* st, T* nd) {while (st < nd)cout << *st++ << endl;/*sf("%d", st++);*/}

int main()
{
  Sourav;

  char p;
  string a;
  cin >> p >> a;
  int n = a.size();
  if (p == 'R')
  {
    for (int i = 0; i < n; i++)
    {
      if (a[i] == 'q')
      {
        a[i] = 'w';
      }
      else if (a[i] == 'w')
      {
        a[i] = 'q';
      }
      else if (a[i] == 'e')
      {
        a[i] = 'w';
      }
      else if (a[i] == 'r')
      {
        a[i] = 'e';
      }
      else if (a[i] == 't')
      {
        a[i] = 'r';
      }
      else if (a[i] == 'y')
      {
        a[i] = 't';
      }
      else if (a[i] == 'u')
      {
        a[i] = 'y';
      }
      else if (a[i] == 'i')
      {
        a[i] = 'u';
      }
      else if (a[i] == 'o')
      {
        a[i] = 'i';
      }
      else if (a[i] == 'p')
      {
        a[i] = 'o';
      }
      else if (a[i] == 'a')
      {
        a[i] = 's';
      }
      else if (a[i] == 's')
      {
        a[i] = 'a';
      }
      else if (a[i] == 'd')
      {
        a[i] = 's';
      }
      else if (a[i] == 'f')
      {
        a[i] = 'd';
      }
      else if (a[i] == 'g')
      {
        a[i] = 'f';
      }
      else if (a[i] == 'h')
      {
        a[i] = 'g';
      }
      else if (a[i] == 'j')
      {
        a[i] = 'h';
      }
      else if (a[i] == 'k')
      {
        a[i] = 'j';
      }
      else if (a[i] == 'l')
      {
        a[i] = 'k';
      }
      else if (a[i] == ';')
      {
        a[i] = 'l';
      }
      else if (a[i] == 'z')
      {
        a[i] = 'x';
      }
      else if (a[i] == 'x')
      {
        a[i] = 'z';
      }
      else if (a[i] == 'c')
      {
        a[i] = 'x';
      }
      else if (a[i] == 'v')
      {
        a[i] = 'c';
      }
      else if (a[i] == 'b')
      {
        a[i] = 'v';
      }
      else if (a[i] == 'n')
      {
        a[i] = 'b';
      }
      else if (a[i] == 'm')
      {
        a[i] = 'n';
      }
      else if (a[i] == ',')
      {
        a[i] = 'm';
      }
      else if (a[i] == '.')
      {
        a[i] = ',';
      }
      else if (a[i] == '/')
      {
        a[i] = '.';
      }
    }
    cout << a << "\n";
  }
  else
  {
    for (int i = 0; i < n; i++)
    {
      if (a[i] == 'q')
      {
        a[i] = 'w';
      }
      else if (a[i] == 'w')
      {
        a[i] = 'e';
      }
      else if (a[i] == 'e')
      {
        a[i] = 'r';
      }
      else if (a[i] == 'r')
      {
        a[i] = 't';
      }
      else if (a[i] == 't')
      {
        a[i] = 'y';
      }
      else if (a[i] == 'y')
      {
        a[i] = 'u';
      }
      else if (a[i] == 'u')
      {
        a[i] = 'i';
      }
      else if (a[i] == 'i')
      {
        a[i] = 'o';
      }
      else if (a[i] == 'o')
      {
        a[i] = 'p';
      }
      else if (a[i] == 'p')
      {
        a[i] = 'o';
      }
      else if (a[i] == 'a')
      {
        a[i] = 's';
      }
      else if (a[i] == 's')
      {
        a[i] = 'd';
      }
      else if (a[i] == 'd')
      {
        a[i] = 'f';
      }
      else if (a[i] == 'f')
      {
        a[i] = 'g';
      }
      else if (a[i] == 'g')
      {
        a[i] = 'h';
      }
      else if (a[i] == 'h')
      {
        a[i] = 'j';
      }
      else if (a[i] == 'j')
      {
        a[i] = 'k';
      }
      else if (a[i] == 'k')
      {
        a[i] = 'l';
      }
      else if (a[i] == 'l')
      {
        a[i] = ';';
      }
      else if (a[i] == ';')
      {
        a[i] = 'l';
      }
      else if (a[i] == 'z')
      {
        a[i] = 'x';
      }
      else if (a[i] == 'x')
      {
        a[i] = 'c';
      }
      else if (a[i] == 'c')
      {
        a[i] = 'v';
      }
      else if (a[i] == 'v')
      {
        a[i] = 'b';
      }
      else if (a[i] == 'b')
      {
        a[i] = 'n';
      }
      else if (a[i] == 'n')
      {
        a[i] = 'm';
      }
      else if (a[i] == 'm')
      {
        a[i] = ',';
      }
      else if (a[i] == ',')
      {
        a[i] = '.';
      }
      else if (a[i] == '.')
      {
        a[i] = '/';
      }
      else if (a[i] == '/')
      {
        a[i] = '.';
      }
    }
    cout << a << "\n";
  }


  return 0;
}

/*
  Documentation

*/
/*
Number of digits in N =floor(log10(N)) + 1;
n = n << 1;   // Multiply n with 2
n = n >> 1;   // Divide n by 2
*/
