#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        string s = to_string(n);
        int len = s.length();
        string tmp;
        for (size_t i = 0; i < len; i++)
        {
            tmp = tmp + '1';
        }
        int tempans = 0;
        unsigned long long int tmpNum = stoi(tmp);

        for (int i = 1; i < 10; i++)
        {
            if (n >= tmpNum * i)
                tempans++;
        }
        cout << (len - 1) * 9 + tempans << endl;
    }
    return 0;
}
