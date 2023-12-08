#include <iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter the Size of 2D Array"<<endl;
    cin>>m>>n;
    int a[m][n];
    int i,j;
    cout<<"Enter the Array elements"<<endl;

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int trans[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        trans[i][j]=a[j][i];
        }
    }
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }
    


}
    