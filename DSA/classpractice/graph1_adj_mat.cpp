#include <iostream>
using namespace std;
int main()
{
    int mat[4][4]={0};
    int s,d ,directed=0, edge =0;
    cout<<"Graph is Directed or not(1= yes and 0=No)"<<endl;
    cin>>directed;
    cout<<"Enter the number of edges"<<endl;
    cin>>edge;

    while(edge > 0)
    {
        cout<<"Enter source and Destination"<<endl;
        cin>>s>>d;
        mat[s][d]=1;
        if(directed==0)
        {
        mat[d][s]=1;
        }
        edge--;
    }
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }

    

}