#include<bits/stdc++.h>
using namespace std;

void substring(char z[],int p, int l)
{
    int i ;
    for(i=1;i<=l;i++,p++)
    {
        z[i]=z[p];

        cout <<z[i];
    }

}

int main()
{
    char a[500],b,c;
    int p1,l1;
    gets(a);
    cin >>p1>>l1;

   substring(a,p1,l1);





}
