#include<stdio.h>
#include<string.h>
int main()
{   int a,b,i,j;
    char s1[1000],s2[1000];
    scanf("%s",&s1);
     scanf("%s",&s2);
    a=strlen(s1);
    b=strlen(s2);
    char ssum[a+b];
j=a;
    //printf("hello");
    for(i=0;i<a;i++)

    {
        ssum[i]=s1[i];
    }
     for(i=0;i<b;i++)

    {


        ssum[j]=s2[i];

        j++;
        ssum[j]='\0'; //must use korte hobe noy to ghost char astese
    }

    printf("%s",ssum);
}
