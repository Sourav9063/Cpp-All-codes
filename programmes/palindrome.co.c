#include<stdio.h>
#include<string.h>



 int main()

 {
     char str[2000];
     char copy[2000];
     char rev[2000];

     gets(str);
     strcpy(  copy, str);

   // printf("%s",rev);
     int i = 0;
     while ( str[i] != '\0')
        i++;
     i--;


     for ( int k=i ; k >= 0; k--)
     {
         int j = 0;
         str[i] = rev[ j];
         j++;
     }
     puts(rev);

     return 0;






 }



