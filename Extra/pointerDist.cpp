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



class Point
{
private:
  float x;
  float y;

public:
  Point(float x1, float y1)
  {
    x = x1;
    y = y1;
  };
  float getx()
  {
    return x;
  }
  float gety()
  {
    return y;
  }
};

void printCoordinateFromPoint(Point point)
{
  cout << "x=" << point.getx() << endl;
  cout << "y=" << point.gety() << endl;
}
string placeOfTheSecond(Point point1, Point point2)
{

  int lrVal = point1.getx() - point2.getx();
  int adVal = point1.gety() - point2.gety();
  string pos = "";

  if (lrVal == 0 && adVal == 0)
  {
    cout << "Same Point";
    return "Same Point";
  }
  if (lrVal > 0)
    pos += "Left ";
  else
    pos += "Right ";
  if (adVal > 0)
    pos += "Down";
  else
    pos += "Above";

  cout << pos << endl;
  return pos;
}

float distance(Point point1, Point point2)
{

  return sqrt((point1.getx() - point2.getx()) * (point1.getx() - point2.getx()) + (point1.gety() - point2.gety()) * (point1.gety() - point2.gety()));
}

int main()
{
  
//   Sourav;

// #ifndef ONLINE_JUDGE
//   freopen("C:\\Users\\my_code\\input.in", "r", stdin);
//   freopen("C:\\Users\\my_code\\output.in", "w", stdout);
// #endif

  Point point1(1, 2);
  Point point2(-3, -4);

  printCoordinateFromPoint(point1);
  placeOfTheSecond(point1, point2);
  cout << distance(point1, point2) << endl;

  return 0;
}

/*
  Documentation:
   


*/