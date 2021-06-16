//                      Name: Structure
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

#define Sourav                        \
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

struct Rec
{
    int length;
    int width;
};

void setRec(struct Rec *rf)
{
    rf->length++;
    rf->width--;
}
struct Arr
{
    string name;
    int age;
} arr[5];

class RecClass
{
private:
    int length;
    int width;

public:
    RecClass()
    {
        length = 10;
        width = 20;
    }
    RecClass(int l, int w);
    int area();
};

int RecClass::area() { return length * width; }
RecClass::RecClass(int l, int w)
{
    length = l;
    width = w;
}

int main()
{
    Sourav;

#ifndef ONLINE_JUDGE
    freopen("C:\\Users\\my_code\\input.in", "r", stdin);
    freopen("C:\\Users\\my_code\\output.in", "w", stdout);
#endif
    arr[1].age = 30;
    struct Rec r;
    RecClass rc(2, 3);
    int area = rc.area();
    cout << area << endl;
    r.length = 10;
    r.width = 20;
    cout << r.length << " " << r.width << endl;
    setRec(&r);
    cout << r.length << " " << r.width << endl;

    return 0;
}

/*
  Documentation:
   


*/