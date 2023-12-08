//Pairs
#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,string>p;
    p ={2,"abcd"};
    pair<int,string> &p1 =p;
    p1.first=3;
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,int> parr[3];
    parr[0]={1,2};
    parr[1]={2,3};
    parr[2]={3,4};
    swap(parr[0],parr[2]);
    for(int i=0;i<3;i++)
    {
        cout<<parr[i].first <<" "<< parr[i].second<<endl;
    }


}

