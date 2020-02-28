#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;

    if(str[0]>='A'&&str[0]<='Z')cout<<str;
    else{
        str[0]-=32;
        cout<<str;
    }
}
