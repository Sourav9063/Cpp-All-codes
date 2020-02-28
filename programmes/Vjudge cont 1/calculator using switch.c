#include<stdio.h>
int main()
{
    float a,b,ans;
    char ch;
    scanf("%f%c%f",&a,&ch,&b); //prittek tar jnne scanf nile kaj korbe na

    switch (ch)
    {
    case'+':
        printf("%f %c %f=%f",a,ch,b,a+b);
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
