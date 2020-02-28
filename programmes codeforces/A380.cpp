#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    char b;
    cin>>a>>b;
   if(a==1||a==2)
    {
    if(b=='A'||b=='D')cout<<"window";
   else if(b=='B'||b=='C')cout<<"aisle";
   else cout<<"neither";

    }

    else if(a>=3&&a<=20)
    {
        if(b=='A'||b=='F')cout<<"window";
        else if(b=='B'||b=='C'||b=='D'||b=='E')cout<<"aisle";
        else cout<<"neither";
    }

    else if(a>=21&&a<=65)
    {
        if(b=='A'||b=='K')cout<<"window";
        else if(b=='C'||b=='D'||b=='G'||b=='H')cout<<"aisle";
        else cout<<"neither";
    }
    else
        cout<<"neither";

}
