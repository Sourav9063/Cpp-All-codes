
#include<stdio.h>


int main()
{
    int n, m, tap=0;
    scanf("%d %d",&n,&m);
    while (n != m)
    {
        if (m > n)
        {
            if (m % 2 == 0)
            {
                m /= 2;
                tap++;
            }
            else
            {
                m++;
                tap++;
            }
        }
        else if (n > m)
        {
            m++;
            tap++;
        }

        printf("%d",tap);  return 0;
    }
}
