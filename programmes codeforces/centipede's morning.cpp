
#include <bits/stdc++.h>

using namespace std;


long long int sn(int n)
{

    if(n>=0&&n<=9)return n;

    stack<int> ans;


    for (int i=9; i>=2; i--)
    {
        while (n%i==0)
        {
            ans.push(i);
            n = n / i;
        }
    }


    if (n != 1)
        return -1;


    long long int k = 0;
    for (; !ans.empty();)
    {
        k = k*10 + ans.top();
        ans.pop();
    }


    return k;
}


int main()
{
    int n;
    cin >>n;
    cout << sn(n);

}
