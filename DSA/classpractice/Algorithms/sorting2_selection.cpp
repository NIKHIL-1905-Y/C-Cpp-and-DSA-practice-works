#include <iostream>
using namespace std;
void swap(int *p,int *v)
{
    int temp=*p;
    *p=*v;
    *v=temp;
}



int main()
{
    int min;
    int a[8]={23,4,1,22,10,5,11,9};

    for(int i=0;i<8;i++)
    {
        min=i;
        for(int j=i+1;j<8;j++)
        {
            if(a[min]>a[j])
            {
                min=j;
                
            }

        }
       swap(&a[i],&a[min]);

    }
    cout<<"the largest value is"<<" "<<a[7]<<endl;
    for(int i=0;i<8;i++)
    {
        cout<<a[i]<<" ";
    }
}