//                      Name:
#include <bits/stdc++.h>
using namespace std;

#define ll long long int           //lld
#define ull unsigned long long int //llu

#define pt cout << "*" \
                << "\n";
#define nl cout << "\n";
#define deb(x) cout << #x << "=" << x << "\n";

#define pb(a) emplace_back(a)
#define all(x) (x).begin(), (x).end()
#define rSort(x) sort((x).rbegin(), (x).rend())

#define Sourav                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

//template<typename... T>void read(T&... args) {((cin >> args), ...);}
template <class T>
inline void sarray(T *st, T *nd)
{
  while (st < nd)
    cin >> *st++; /*sf("%d", st++);*/
}
template <class T>
inline void parray(T *st, T *nd)
{
  while (st < nd)
    cout << *st++ << " ";
  nl /*sf("%d", st++);*/
}
ll tmp, ans;

int main()
{
  Sourav;

#ifndef ONLINE_JUDGE
  freopen("C:\\Users\\my_code\\input.in", "r", stdin);
  freopen("C:\\Users\\my_code\\output.in", "w", stdout);
#endif

  int n;
  cin >> n;
  int lenthOfArr[n], values[n], locations[n];
  int firstmin = 200009;
  memset(locations, -1, sizeof(locations));
  int lengthOfGift;
  cin >> lengthOfGift;
  int gifts[lengthOfGift];
  for (size_t i = 0; i < lengthOfGift; i++)
  {
    cin >> gifts[i];
    if (gifts[i] <= firstmin)
    {
      firstmin = gifts[i];
      values[0] = gifts[i];
      locations[0] = i + 1;
    }
  }

  for (int j = 1; j < n; j++)
  {
    cin >> lengthOfGift;
    int nextMin = 2000005;
    int giftss[lengthOfGift];
    for (int i = 0; i < lengthOfGift; i++)
    {
      cin >> giftss[i];
      if (values[j - 1] <= giftss[i])
      {
        if (giftss[i] <= nextMin)
        {
          nextMin = giftss[i];
          values[j] = giftss[i];
          locations[j] = i+1;
        }
      }
    }
  }
  for (size_t i = 0; i < n; i++)
  {
    if(locations[i]==-1)
    {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  parray(locations, locations + n);

  return 0;
}

/*
  Documentation:
   


*/