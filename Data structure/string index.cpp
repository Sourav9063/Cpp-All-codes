#include<bits/stdc++.h>
using namespace std;


int main()
{

    char text[1000],pat[1000];
    int pos;
gets(text);
gets(pat);

int lenpat=strlen(pat);
int i,j;
int flag=-1;
for(i=0;i<strlen(text);i++)
{
    if(text[i]==pat[0])
        {
            for(j=1;j<lenpat;j++)
            {
                if(text[i+j]==pat[j]){continue;}
                else
                {
                    flag=0;
                    break;
                }

            }
        flag=1;
        }
if(flag==1)break;
}



cout<<i;




}
