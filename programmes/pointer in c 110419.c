#include<stdio.h>

 int main()
 {
    int p=900,q=132;
    int *p_pointer =&p;
    int *q_pointer =&q;
  double a[]={1.24,3.53 ,3.53};
    printf("%d %d ",p_pointer, q_pointer);

     printf("%d %d %d", &a[0],&a[1],&a[2]);

 }
