#include <iostream>
using namespace std;

int main()
{
    int a[8]={23,4,1,22,10,5,11,9};

    int pivot,j;

    for(int i=0;i<8;i++)
    {
        pivot=a[i];
        for( j=i-1;j>=0;j--)
        {
        
            if(a[j]>pivot)
            {
                //copy values
                a[j+1]=a[j];
                
            }
            else{
                break;
            }
        }
        a[j+1]=pivot;
    }
     cout<<"The value after sorting is"<<endl;
    for(int i=0;i<8;i++)
    {
        cout<<a[i]<<" ";
    }
}