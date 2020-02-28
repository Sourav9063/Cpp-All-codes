
#include<stdio.h>
#include<string.h>

int main()
{
    char song[100][20] =
    {
        "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you"
        , "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"
    };
    char name[200][200];
    int n, i, j, flag = 0, end = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%s", &name[i]);
    }
    i = 0, j = 0;
    while(1)
    {
        printf("%s: %s\n", name[i], song[j]);

        if(i == n-1)
            flag = 1;//last person shesh korlo tar memory
        if(j == 15 && flag==1){break;}
        i++, j++;

        if(i >= n)  i = 0;//jodi flag==0 na hoy eigula kick in korbe tai loop break hobe na
        if(j >= 16) j = 0;
    }
    return 0;
}
