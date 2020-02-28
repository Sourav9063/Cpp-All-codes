#include<stdio.h>
int main()
{
    int a;

    while(scanf("%d",&a)!=EOF)
    {  if(a!=2)
        {
            if(a%2==0)
        {

                printf("YES\n");

        }
            else
            {
                printf("NO\n");
            }

        }
        else{
            printf("NO\n");
        }

}
}
