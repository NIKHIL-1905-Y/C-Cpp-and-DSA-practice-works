#include <iostream>
using namespace std;
int MaxElement(int arr[],int size)
{
    int max = arr[0];
    
    for(int i = 0;i < size;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int a[]={20,18,10,15,30,25,35,28,32,40};

    int maximum = MaxElement(a,10);
    cout<<"The Maximum element in the array is : "<<maximum<<endl;
}