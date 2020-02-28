#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1 = 2, num2 = 3, sum = 0, mul = 0, div = 1;
    int *ptr1, *ptr2;
    ptr1 = &num1;
    ptr2 = &num2;
    sum = *ptr1 + *ptr2;
    mul = sum * (*ptr1);
    *ptr2+=1;
    div =9+(*ptr1)/(*ptr2)-30;


cout<<*ptr1<<" "<<*ptr2<<" "<<mul<<" "<<div;

}
