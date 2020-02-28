

#include<stdio.h>
#include<string.h>



int main()
{




    char arr[200];
    int T,i,j;
    scanf("%d",&i);
    T=i;
    while(T--)
    {

            scanf("%s",arr);
            j=strlen(arr);
            if(j<=10){printf("%s\n",arr);}
            else
            printf("%c%d%c\n",arr[0],j-2,arr[j-1] );














    }






    return 0;
}

