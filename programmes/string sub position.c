#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,i,j=0,k,l,flag;
    char s1[1000],s2[1000];
    scanf("%s",&s1);
    scanf("%s",&s2);
    a=strlen(s1);
    b=strlen(s2);

    for(i=0;i<a;i++)
    {
        if(s1[i]==s2[0])
        {k=i;

        j=i+1;

            for(l=1;l<b;l++)
            {
              if(s1[j]!=s2[l])
              { flag=0;
                  break;
              }
              else
                {
                    l++;
                    flag=1;}

        if(flag==1)
              {
                  printf("%d,",k);
              }
            }
        }
    }





}
