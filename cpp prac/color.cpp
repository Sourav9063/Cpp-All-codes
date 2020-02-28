#include<bits/stdc++.h>
using namespace std;


int main()
{
    char arr[10];
    char yc[]={"yellow"},jc[]={"indigo"},oc[]={"orange"},vc[]={"violet"};
    int T;
    int y,o,j,v;

    int s;
    int i;
    scanf("%d",&T);
    while(T--)
    {
    y=o=j=v=0;
        scanf("%s",arr);


    s=strlen(arr);

    if(s==3)printf("red\n");
    else if(s==4)printf("blue\n");
    else if(s==5)printf("green\n");

    else if(s==6)
    {

       for(i=0;i<s;i++)
       {
           if(arr[i]==yc[i])y++;
            if(arr[i]==vc[i])v++;
             if(arr[i]==oc[i])o++;
              if(arr[i]==jc[i])j++;


       }
     //printf("%d %d %d %d\n",v,o,j,y);

       if(v>y&&v>o&&v>j)printf("violet\n");
        if(y>v&&y>o&&y>j)printf("yellow\n");
        if(o>y&&o>v&&o>j)printf("orange\n");
        if(j>y&&j>o&&j>v)printf("indigo\n");



    }




    }



}

