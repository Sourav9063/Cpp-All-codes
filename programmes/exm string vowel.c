#include<stdio.h>
#include<string.h>
int main()
{
    int a=0,e=0,i=0,o=0,u=0;
    char input[2000];
    int j;
    gets(input);

    for(j=0;input[j]!='\0';j++)
    {
        if(input[j]=='a'||input[j]=='A') a++;
        else if(input[j]=='e'||input[j]=='E') e++;
        else if(input[j]=='i'||input[j]=='I') i++;
        else if(input[j]=='o'||input[j]=='O') o++;
        else if(input[j]=='u'||input[j]=='U') u++;
    }

    if(a!=0) printf("a:%d\n",a);
    if(e!=0) printf("e:%d\n",e);
    if(i!=0) printf("i:%d\n",i);
    if(o!=0) printf("o:%d\n",o);
    if(u!=0) printf("u:%d\n",u);

}
