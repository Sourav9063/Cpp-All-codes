#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mat[5][5];

    int i,j;

    int ia,ja,a;

    for(i=1; i<=5; ++i)
    {
      /*  cout<<"line";
        cout<<i; */
        for(j=1; j<=5; ++j)
        {
            scanf("%d",&mat[i][j]);
            if(mat[i][j]==1)
            {
                ia=i;
                ja=j;

            }
        }

    }
    //cout<<i,j;


    a=abs(ia-3)+abs(ja-3);
    cout<<a<<endl;





}
