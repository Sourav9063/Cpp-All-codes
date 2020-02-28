/// pointers and one dimensional array
#include<stdio.h>
int main()
{
    int *a;
    a=(int *) malloc(10*sizeof(int));
    int i=0;
    for (i=0;i<10;++i)
    {
        *(a+i)=i;
    }
    for(i=0;i<10;++i)
    {
        printf("%d\n",*(a+i));
    }

     a=(int *) malloc(20*sizeof(int));

     for (i=0;i<20;++i)
    {
        *(a+i)=i;
    }
    for(i=0;i<20;++i)
    {
        printf("%d\n",*(a+i));
    }
    return 0;
}

 void twodarray()
 {

     int *arr[3];

    int i=0,j=0;
    for(i=0;i<2;++i) //row 2+1 shorto ta mainly
    {
        arr[i]=(int *) malloc(3*sizeof(int));

        for(j=0;j<3;++j)//column  er jonne
        {
            arr[i][j]=i;//eta issamoto
        }
    }



 }








