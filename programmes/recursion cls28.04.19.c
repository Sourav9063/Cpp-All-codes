#include<stdio.h>
#include<string.h>
void rev(char ch[],int indx) //
{
    if(ch[indx]=='\0') return;

    else {
        rev(ch,indx+1);
        printf("%c",ch[indx]);
        return;
    }

}

int main()
{
    char str[300];
    gets(str);
    //scanf("%s",str);
    rev(str,0);
    return 0;


}
