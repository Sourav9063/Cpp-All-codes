#include<stdio.h>

void print()
{
    static int i=0;
    ++i;
    printf("%d\n",i);
    return;
}

int main()
{
    print();
    print();
    return 0;
}
