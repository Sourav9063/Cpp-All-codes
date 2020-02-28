#include<stdio.h>
int main()
{
    int a=1,b=1;
    int mat[a][b];
    int i,j,min;

    scanf("%d%d",&a,&b);

    for(i=1;i<=a;i++)
    {
        for(j=1;j<=b;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    min=mat[1][1];

      for(i=1;i<=a;i++)
    {
        for(j=1;j<=b;j++)
        {
            if(min>mat[i][j]) min=mat[i][j];
            else continue;
        }


    }
    printf("       %d",min);

}
