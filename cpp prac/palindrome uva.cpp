#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1001];
    while(scanf("%s",s)==1)
    {
        int len=strlen(s);
        int i,j;
        char a[]="A   3  HIL JM O   2TUVWXY5";
        char b[]="01SE Z  8 ";
        int flagpalin=0;
        int flagmirror=0;
        for(i=0,j=len-1;i<=j;i++,j--)
        {
            if(s[i]!=s[j])flagpalin=1;
            if(s[i]>='A'&&s[i]<='Z')
            {
                if(s[j]!=a[s[i]-'A'])
                    flagmirror=1;
            }
            else
            {
                if(s[j]!=b[s[i]-'0'])
                    flagmirror = 1;
            }
        }
        printf("%s -- is ", s);
        if(flagpalin)
        {
            if(flagmirror)
                printf("not a palindrome.");
            else
                printf("a mirrored string.");
        }
        else
        {
            if(flagmirror)
                printf("a regular palindrome.");
            else
                printf("a mirrored palindrome.");
        }

    }

}














