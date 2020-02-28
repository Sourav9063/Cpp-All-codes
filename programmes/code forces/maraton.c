
#include<stdio.h>
#include<string.h>
int main()
{
    char arr[1000002];
    int n,i,a,b,c,d,e,f,g;
   a=b=c=d=e=f=g=0;
    scanf("%s",&arr);
   n=strlen(arr);
    for(i=0;arr[i]!='\0';i++)
    {
        if(arr[i]=='A'){a++;if(a!=0&&arr[i+1]!='A') {printf("A%d",a);a=0;}}
        else if(arr[i]=='B'){b++;if(b!=0&&arr[i+1]!='B') {printf("B%d",b);b=0;}}
        else if(arr[i]=='C'){c++;if(c!=0&&arr[i+1]!='C') {printf("C%d",c);c=0;}}
        else if(arr[i]=='D'){d++;if(d!=0&&arr[i+1]!='D') {printf("D%d",d);d=0;}}
        else if(arr[i]=='E'){e++;if(e!=0&&arr[i+1]!='E') {printf("E%d",e);e=0;}}
        else if(arr[i]=='F'){f++;if(f!=0&&arr[i+1]!='F') {printf("F%d",f);f=0;}}
        else if(arr[i]=='G'){g++;if(g!=0&&arr[i+1]!='G') {printf("G%d",g);g=0;}}
      //  printf("loop\n%d",i+1);
    }
  /* if(a!=0) printf("A%d",a);
   if(b!=0) printf("B%d",b);
   if(c!=0) printf("C%d",c);
   if(d!=0) printf("D%d",d);
   if(e!=0) printf("E%d",e);
   if(f!=0) printf("F%d",f);
   if(g!=0) printf("G%d",g);
*/

}
