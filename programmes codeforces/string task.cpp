#include<bits/stdc++.h>
#include<string.h>

using namespace std;
int main()
{

    char arr[200];
    scanf("%s",&arr);
    int i=0;
    int j=0;
    int k=strlen(arr);
    for(i=0;i<k;i++)
    {
        if(arr[i]>='A'&&arr[i]<='Z')
            arr[i]=arr[i]+32;
  //
  }


   for(i=0;i<k;i++)
   {
       if(arr[i]!='y'&&arr[i]!='a'&&arr[i]!='e'&&arr[i]!='i'&&arr[i]!='o'&&arr[i]!='u') {
          printf(".%c",arr[i]);
       }
       else
       continue;
   }




}
