
#include<stdio.h>
#include<string.h>

int main()
{
    char str1[800],str2[800];

    scanf("%s %s",&str1,&str2);

    printf("%s\n",strcat(str1,str2)); // addition
   printf("%d\n",strcmp(str1,str2)); //comparison


    printf("%s\n",strstr(str1,str2)); // 1st er ta mother string dhore kaj korbe



}
