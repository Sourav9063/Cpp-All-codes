#include<stdio.h>
int main()
{
    int k,r;
  scanf("%d %d",&k, &r);
  int a;
  for(a=1;;a++)
  {
      if((k*a)%10==0||(k*a)%10==r)
      {
          printf("%d",a);
          break;
      }
  }
}
