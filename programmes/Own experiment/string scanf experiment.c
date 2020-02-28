//c program e  character er arrey e string.
//char srt[] ={"hello"};  direct declare ,
// char str[300];
//gets(str); gets enter chapar agei input ney (space o nibe)
// or scanf("%s",&str); enter dite hobe (space dewa jabe na {scanf space ke end hisebe ney})


#include<stdio.h>
#include<string.h>
int main()
{
     int v=0,c=0,i,n;

    char str[]={"scanf("%s",&str)"} //failed
    //gets(str);
   // scanf("%d",&n);

n=strlen(str);
   for(i=0;i<n;i++)
   {


    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')

{
    v++;

}
    else
    {
        c++;
    }
    }

    printf("consonant :%d\nvowel :%d",c,v);
      //printf("%s", str);



}



