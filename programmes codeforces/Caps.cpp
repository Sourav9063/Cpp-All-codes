#include<bits/stdc++.h>
using namespace std;
int check(char s[101], int len)
{

    if(len==1&&s[0]<='z'&&s[0]>='a')return 1;

    else if(len>1)
    {
        for(int i=1; i<len; i++)
        {
            if(s[i]<='z'&&s[i]>='a')return 0;

        }

return 1;
    }

}


void print(char s[101], int len)
{

    if(s[0]<='z'&&s[0]>='a')
        s[0]-=32;
    // cout<<s[0];
    for(int i=1; i<len; i++)
    {
        if(s[i]<='Z'&&s[i]>='A')
            s[i]+=32;
    }

    cout<<s<<endl;

}


int main()
{
    char s[101];
    scanf("%s",&s);
    int len=strlen(s);

    int flag=0;


    flag=check(s,len);


//cout<<flag;

    if(flag)
        print(s,len);
    else
        cout<<s<<endl;








}
