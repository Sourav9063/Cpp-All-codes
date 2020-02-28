//c program e  character er arrey e string.
//char srt[] ={"hello"};  direct declare ,
// char str[300];
//gets(str); gets enter chapar agei input ney (space o nibe)
// or scanf("%s",&str); enter dite hobe (space dewa jabe na {scanf space ke end hisebe ney})
// n=strlen(strig name); string er length mapbe



#include<stdio.h>
#include<string.h>
int main()
{
    int v=0,c=0,i,n;

    char str[1000];
    gets(str);
    // scanf("%d",&n);
    //scanf("%s",&str);
//n=strlen(str); //i<n use korle n use korte hoy
    for(i=0; str[i]!='\0'; i++)
    {


        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')

        {
            v++;

        }
        else
        {
            c++;
        }
    }

    printf("Consonant :%d\nVowel :%d",c,v);
    //printf("%s", str);



}



