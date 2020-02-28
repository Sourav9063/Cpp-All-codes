#include<stdio.h>
int main()
{
    float a,b,ans;
    char ch;
    scanf("%f %c %f",&a,&ch,&b);

    switch (ch)
    {
    case'+':
        printf("%f %ch %f=%f",a,ch,b,a+b);
        break;
    case'-':
        printf("%f %c %f=%f",a,ch,b,a-b);
        break;
    case'*':
        printf("%f %c %f=%f",a,ch,b,a*b);
        break;
    case'/':
        printf("%f %c %f=%f",a,ch,b,a/b);
        break;
    }
}
