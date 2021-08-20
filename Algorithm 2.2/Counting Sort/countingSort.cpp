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
    cout << *st++ << endl; /*sf("%d", st++);*/
}
ll tmp, ans;
void countsort(int arr[], int maxVal, int size)
{

  int countArr[++maxVal] = {0};
  for (size_t i = 0; i < size; i++)
  {

    countArr[arr[i]]++;
  }
  for (size_t i = 1; i < maxVal; i++)
  {
    countArr[i] += countArr[i - 1];

    // cout << countArr[i] << endl;
  }
  int tmpArrFinal[size] = {0};
  for (int i = size - 1; i >= 0; i--)
  {

    tmpArrFinal[--countArr[arr[i]]] = arr[i];
  }
  for (size_t i = 0; i < size; i++)
  {
    arr[i] = tmpArrFinal[i];
  }
  
}

int main()
{
  Sourav;

#ifndef ONLINE_JUDGE
  freopen("C:\\Users\\my_code\\input.in", "r", stdin);
  freopen("C:\\Users\\my_code\\output.in", "w", stdout);
#endif

  int n;
  cin >> n;
  int arr[n];
  int maxValue = -1;
  for (size_t i = 0; i < n; i++)
  {
    cin >> arr[i];
    if (arr[i] >= maxValue)
    {
      maxValue = arr[i];
    }
  }
  // deb(maxValue);

  countsort(arr, maxValue, n);
  // sarray(arr, arr + n);
  for (size_t i = 0; i < n; i++)
  {
    cout << arr[i];nl
  }
  

  return 0;
}

/*
  Documentation:
   


*/