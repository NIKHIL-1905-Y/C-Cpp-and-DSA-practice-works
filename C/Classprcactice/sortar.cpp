#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1,43,41,8,0,24,4,2,4,45,5,4,3,5,7};
    int k = sizeof(arr)/sizeof(int);
    
    


    for(int i = 0 ;i < k ;i++)
    {
        for(int j = i+1;j<k-1;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j]= temp;
            }
        }
    }
    for(int i = 0;i< k ;i++)
    {
        cout<<arr[i]<<endl;
    }
}