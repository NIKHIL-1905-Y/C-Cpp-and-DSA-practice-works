#include <iostream>
using namespace std;

int main()
{
    int a[3][3]={
        (1,2,3),
        (1,0,1),
        (1,1,1)
    };

    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]==0)
            {
                a[i--][j] = 0;
                a[i++][j]=0;
                a[i][j--]= 0;
                a[i][j++]=0;
            }
        }
        cout<<a[i][j];
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<a[i][j];
        }
    }
}
