#include<bits/stdc++.h>
using namespace std;
int main()
{

#ifndef ONLINE_JUDGE
  freopen("C:\\Users\\my_code\\input.in", "r", stdin);
  freopen("C:\\Users\\my_code\\output.in", "w", stdout);
#endif


  priority_queue< int > q;
  q.push(10230); // inserting 10230
  q.push(1021); // inserting 1021
  q.push(102322); // inserting 102322

  while (!q.empty()) {
    cout << q.top() << endl; // printing the top
    q.pop(); // removing that one
  }









}
