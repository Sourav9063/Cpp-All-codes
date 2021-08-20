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

int main()
{
  Sourav;

#ifndef ONLINE_JUDGE
  freopen("C:\\Users\\my_code\\input.in", "r", stdin);
  freopen("C:\\Users\\my_code\\output.in", "w", stdout);
#endif

  int arr[] = {0, 2, 3, 4, 5, 5, 5, 6, 7, 8, 9};
  int arrSize = sizeof(arr) / sizeof(arr[0]);
  int arrSizePtr = *(&arr + 1) - arr;
  //             (&arr + 1) points to the memory address right after the end of the array.
  // *(&arr + 1) simply casts the above address to an int *.
  // Subtracting the address of the start of the array, from the address of the end of the array,​ gives the length of the array.
  cout << arrSizePtr;
  pt;

  cout << (binary_search(arr, arr + 13, 14) ? "True" : "False") << endl;

  cout << lower_bound(arr, arr + arrSize, 1) - arr << endl;// first position of the value
  cout << *lower_bound(arr, arr + arrSize, 1) << endl;// first position of the value

  cout << upper_bound(arr, arr + arrSizePtr, 1) - arr << endl;// position of the greater value of the given one

  cout << *(upper_bound(arr, arr + arrSize, 1)) << endl;//cast to the value of the pointer


  return 0;
}

/*
  Documentation:
   


*/