
#include<stdio.h>
#include<string.h>

int main()
{
    char str[3000];
    scanf("%s",&str);
    int i=0, j=strlen(str)-1,flag=0;
    for(i=0; i<strlen(str)/2; ++i,--j)
    {
        if(str[i]==str[j])
        {
            continue;
        }
        else
        {
            flag=1;
            break;
        }


    }
    if(flag==1)
    {
        printf("no");

    }

    else
    {
        printf("yes");
    }


}
