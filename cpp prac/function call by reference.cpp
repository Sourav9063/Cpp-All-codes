#include<bits/stdc++.h>
using namespace std;

void add(int*);//ref er jonno same memory call by pointer
int main()
{
    int num=2;
    cout<<num;
    add(&num);
    cout<<"\n"<<num;

}
void add(int *n)
{
    *n=*n+10;
    cout<<"inside"<<*n;
    //no return needed
    //because the value of num is changed
}
