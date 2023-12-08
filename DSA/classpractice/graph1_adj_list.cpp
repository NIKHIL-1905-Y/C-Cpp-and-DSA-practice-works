#include <iostream>
#include<vector>
using namespace std;
void addEdge(vector<int>a[],int s,int d)
{
    a[s].push_back(d);
    a[d].push_back(s);
}
void printGraph(vector<int> a[],int v)
{
    for(int i=0;i<v;i++)
    {
        cout<<i<<"-> ";
        for(int value:a[i])
        {
            cout<<value<<"-> ";
        }
        cout<<endl;
    }

}

int main()
{
    int v=5;
    vector<int>a[v];

   addEdge(a,0,1);
   addEdge(a,1,2);
   addEdge(a,2,3);
   addEdge(a,2,0);
   addEdge(a,0,3);
   printGraph(a,v);

}
