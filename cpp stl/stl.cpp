#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int>A={11,2,3,14};
    cout<<A[1]<<endl;

    sort(A.begin(),A.end());//using nlogn
        //2,3,11,14;

       bool present =binary_search(A.begin(),A.end(),3);
       A.push_back(100);
       present=binary_search(A.begin(),A.end(),100);










}
