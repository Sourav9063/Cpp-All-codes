#include<bits/stdc++.h>
using namespace std;
int a[100001];
int main()
{
  int n, x = 1, y, i;
  cin >> n;
  for (i = 1; i <= n; i++)
    scanf("%d", a + i);
  for (i = 1; i < n; i++)
    if (a[i] > a[i + 1]) {x = i; break;}
  for (i = x; i < n; i++)
    if (a[i] < a[i + 1]) {y = i; break;}
  if (i == n) y = n;
  reverse(a + x, a + y + 1);
  for (i = 1; i < n; i++)
    if (a[i] > a[i + 1]) break;
  if (i != n) cout << "no";
  else
  {
    cout << "yes\n";
    cout << x << " " << y << endl;
  }
}