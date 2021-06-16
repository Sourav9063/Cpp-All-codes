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

class Triangle
{
private:
    float firstSide;
    float secondSide;
    float thirdSide;

public:
    Triangle(float a, float b, float c)
    {

        float ar[3] = {a, b, c};
        sort(ar, ar + 3);
        // cout << ar[0]<<ar[1]<<ar[2] << endl;

        assert(ar[0] + ar[1] > ar[2]);
        firstSide = a;
        secondSide = b;
        thirdSide = c;
    }

    float getFirstSide() { return firstSide; }
    float getSecondSide() { return secondSide; }
    float getThirdSide() { return thirdSide; }

    float getPerimeter();
    float getArea();
};

float Triangle::getPerimeter()
{
    return firstSide + secondSide + thirdSide;
}
float Triangle::getArea()
{
    float p = getPerimeter() / 2;
    return sqrt(p * (p - firstSide) * (p - secondSide) * (p - thirdSide));
}

int main()
{
    Sourav;

    #ifndef ONLINE_JUDGE
        freopen("C:\\Users\\my_code\\input.in", "r", stdin);
        freopen("C:\\Users\\my_code\\output.in", "w", stdout);
    #endif
    float a;
    float b;
    float c;
    cin >> a >> b >> c;

    Triangle t1(a, b, c);

    cout << t1.getPerimeter() << endl;
    cout << t1.getArea() << endl;

    return 0;
}

/*
  Documentation:
   


*/