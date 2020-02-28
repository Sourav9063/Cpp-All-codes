#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,i,j=0;
    char s1[1000],s2[1000];
    scanf("%s",&s1);
    scanf("%s",&s2);
    a=strlen(s1);
    b=strlen(s2);
    if(a==b)
    {
        for(i=0; i<a; i++)
        {


            if( s1[i]!=s2[i])

            {
                j++;
                break;

            }



        }

         if(j>0)
    {
        printf("not equal");

    }
    else
    {
        printf("equal") ;

    }

    }

   else{
    printf("Not equal\n");
   }













}
