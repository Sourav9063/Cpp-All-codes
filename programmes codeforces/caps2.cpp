#include<bits/stdc++.h>

using namespace std;
int main()
{
    char s[101];
    scanf("%s",&s);
    int len=strlen(s);

    int allcap=0;
    int scap=0;
    int notrns=0;
    if(len==1){if(s[0]<='z'&&s[0]>='a'){s[0]-=32;cout<<s;}
                else {s[0]+=32;cout<<s;}
    }


    else
    {
         for(int i=1; i<len; i++)
        {
            if(s[i]<='z'&&s[i]>='a')notrns=1;

        }
        if(!notrns)
        {
            if(s[0]<='z'&&s[0]>='a')scap=1;
            else if(s[0]<='Z'&&s[0]>='A')allcap=1;
        }




    }
    //cout<<allcap<<scap<<notrns;

    if(notrns)cout<<s;
    else if(allcap){
        for(int i=0;i<len;i++)
        {
            s[i]+=32;
        }
        cout<<s;
    }

    else if(scap)
        {
            s[0]-=32;
            for(int i=1;i<len;i++)
        {
            s[i]+=32;
        }
        cout<<s;




    }




}
