#include<bits/stdc++.h>
using namespace std;

 bool compare(data a,data b)
    {
        if(a.income ==b.income)
        {
            if(a.height==b.height)
            {
                if(a.weight==b.weight)
                return strlen(a.name)<strlen(b.name);
                else return a.weight<b.weight;
            }else return a.height> b.height;
        }else return a.incoome> b.income;

    }




int main()
{




    struct data {

    char name[1000];
    int height, weight;
    long long income;



    };






    sort(v.begin(),v.end,compare)




    }







}
