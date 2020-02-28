#include<stdio.h>

int main()
{
    int uj=0,lj=0,j=100,tc=60;
   scanf("%d",&tc);
    int i,k;
  int jmps[tc][j];

    for(k=1; k<=tc; k++)
    {
    scanf("%d\n",&j);


        for(i=1; i<=j; i++)
        {
            scanf("%d",&jmps[k][i]);
        }
        uj=0;
        lj=0;



            for(i=2; i<=j; i++)
            {
                if(jmps[k][i-1]<jmps[k][i])
                {
                    uj++;
                }
                else if(jmps[k][i-1]>jmps[k][i])
                {
                    lj++;
                }
                else if(jmps[k][i-1]==jmps[k][i])
                {
                    continue;
                }

            }

            jmps[k][1]=uj;
            jmps[k][2]=lj;





        printf("Case %d: %d %d\n",k,jmps[k][1],jmps[k][2]);
    }
}
