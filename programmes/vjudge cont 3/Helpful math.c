#include<stdio.h>
#include<string.h>
int main()
{
 int i,j,p,q,k;
    char arr[200];
    scanf("%s",&arr);
    k=strlen(arr);
    //printf("%d\n",k);


    for(i=0;i<k;i=i+2)
    {
        for(j=i+2;j<=k;j=j+2)
        {
            if(arr[i]>=arr[j])
            {


            p=arr[i];
            q=arr[j];
             arr[i]=q;
            ar
            r[j]=p;
            }
        }
    }

    printf("%s",arr);
















}
