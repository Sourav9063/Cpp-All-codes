#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector< int > v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    vector< int >:: iterator i;

    for (i= v.begin(); i< v.end();i++)
    {
        printf("%d\n",*i);
    }



}
