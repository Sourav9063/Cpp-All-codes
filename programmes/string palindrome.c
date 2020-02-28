// aabaa is a palindrome
// one to end and end to one




#include<stdio.h>
#include<string.h>

int main()
{
    int i,n,a=0,g;
    char str[1000], rts[1000];

 scanf("%s",&str);

    n=strlen(str);
    g=n-1;

    for(i=0;i<n;i++)
    {
        rts[g]=str[i];
  g=g-1;
   }

    printf("%s\n",rts);
for(i=0;i<n;i++)
{


        if(str[i]==rts[i])
        {
            a++;
        }
        else
            {
            a=0;
            }

}
    if(a!=n)
    {
        printf("no");
    }
    else
    {
        printf("yes");
    }
}
