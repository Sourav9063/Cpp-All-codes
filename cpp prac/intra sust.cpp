#include<bits/stdc++.h>
using namespace std;


int main()
{
    char arr[10];
    int T;
    int y,o,j,v;

    int s;
    int i,f=0;
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

        if(arr[i]=='v'||arr[i]=='i'||(arr[i]=='l'&&f==0)||arr[i]=='e'||arr[i]=='t'||arr[i]=='o')
        {
            if(arr[i]=='l')
            f=1;
        v++;}
        if(arr[i]=='r'||arr[i]=='a'||arr[i]=='n'||arr[i]=='g'||arr[i]=='e'||arr[i]=='o'){o++;}
        if(arr[i]=='i'||arr[i]=='n'||arr[i]=='d'||arr[i]=='g'||arr[i]=='o'){j++;}
        if(arr[i]=='y'||arr[i]=='e'||arr[i]=='l'||arr[i]=='w'||arr[i]=='o'){y++;}

       }
     // printf("%d %d %d %d\n",v,o,j,y);

       if(v>y&&v>o&&v>j)printf("violet\n");
        if(y>v&&y>o&&y>j)printf("yellow\n");
        if(o>y&&o>v&&o>j)printf("orange\n");
        if(j>y&&j>o&&j>v)printf("indigo\n");



    }




    }



}
