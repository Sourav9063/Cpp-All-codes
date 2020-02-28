#include<stdio.h>


int main(){

    int n,m,tap=0,x;

  scanf("%d %d",&n,&m);
    if(m<n)
    {
        printf("%d",n-m);
        return 0;
    }
    while(m>n){
        if(m%2==0){
            m/=2;
            tap++;
        }
        else{
            m++;
            tap++;
        }
    }
    printf("%d",tap+n-m);

}

