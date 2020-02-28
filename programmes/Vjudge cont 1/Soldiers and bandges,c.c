#include<stdio.h>


int main()
{

    int i,j,a,n,m,mat[10000]­,store[10000],counter=0;



    scanf("%d%d",&m,&n)

    for(i=0; i<n; i++)
    {

        scanf("%d",&mat[i]);
    }


    for(i=0; i<n; i++)
    {

        for(j=i+1; j<n; j++)
        {

            if(mat[i]>=mat[j])
            {

                a=mat[i];
                mat[i]=mat[j];
                mat[j]=a;
            }
        }
    }


    for(i=(n-1); i>=0; i--­)
    {

        for(j=0; j<=n; j++)
        {

            if(i-j>=(m-1))
            {

                store[counter]=mat[i­]-mat[j];
                counter++;
            }

        }

    }


    int result=store[0];

    for(i=1; i<counter; i+­+)
    {

        if(result>store[i])
        {

            result=store[i];

        }

    }

    printf("%d",result);





    return 0;
}
