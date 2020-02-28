

#include<stdio.h>
#include<string.h>

int main()
{ int i,k=0,j;
    char used ,str[10000];

while(gets(str))
   {


    int len=strlen(str);
   char bear[len];
    if(len==4&&str[0]=='D'&&str[1]=='O'&&str[2]=='N'&&str[3]=='E')
    {
        break;
    }


    for(i=0;i<len;i++)
    {
        if(str[i]!='!'&&str[i]!='?'&&str[i]!=','&&str[i]!='.'&&str[i]!=' ')
       {

        bear[k]=str[i];
        k++;
       }

    }

for( i = 0; bear[i]; i++){
  bear[i] = tolower(bear[i]);
}
    //strlwr(bear);

 // printf("%s",bear);
   //printf("%s",stoop);
//printf("%d",x);

    int flag=0;
    j=k-1;
    for(i=0; i<k/2; i++,j--)
    {
        if(bear[i]!=bear[j])
        {
            flag=1;
        }


    }
    if(flag==1)
    {
        printf("Uh oh..\n");

    }

    else
    {
        printf("You won't be eaten!\n");
    }
    flag=0;
    k=0;


}

}
