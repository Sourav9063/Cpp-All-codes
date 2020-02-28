
#include<stdio.h>
#include<string.h>
int main()
{
    int a=0,b;

    char arr[20];
    while(scanf("%s",arr))
    {
        a++;
        if(strcmp(arr,"*")==0)
        break;
        else if(strcmp(arr,"Hajj")==0)

        {
            printf("Case %d: Hajj-e-Akbar\n",a);
        }

        else if(strcmp(arr,"Umrah")==0)
        {
            printf("Case %d: Hajj-e-Asghar\n",a);

        }



    }








}
