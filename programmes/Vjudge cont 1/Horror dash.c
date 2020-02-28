#include<stdio.h>
int main()
{
    int n, N[100],i,c,t,T[50];
   while( scanf("%d",&t)==1)
{



    for(c=0; c<t; c++)
    {

        scanf("%d",&n);
        T[c]=0;

        for(i=0; i<n; i++)
        {
            scanf("%d",&N[i]);

         if(T[c]<N[i])
            {
                T[c]=N[i];
            }
        }

printf("case %d: %d\n",c+1,T[c]);

    }




}
}
