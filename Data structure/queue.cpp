#include<bits/stdc++.h>
using namespace std;

int Qinsert(int arr[])
{
    cout<<"insert";

}

int Qdelete(int arr[])
{
cout <<"delete";

}


int main()
{
    cout<<"Length of Queue"<<endl;
    int t;
    cin>>t;
    int arr[t];
    char ch;
    cout<<"Press d to delete and i to insert"<<endl;
    cin>>ch;
    if(ch=='d') Qdelete(arr[t]);
    else if(ch=='i')Qinsert(arr[t]);





}
