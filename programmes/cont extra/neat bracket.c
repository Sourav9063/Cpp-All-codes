#include<stdio.h>
#include<string.h>

int main()
{
    int i,a=0;
    char arr[25];

    gets(arr);
    for(i=0;arr[i]!='\0';i++)
    {
        if(arr[i]=='(') a++;
        else if(arr[i]==')') a--;

    }
    if(a==0) printf("Yes");
    else printf("No");

}
