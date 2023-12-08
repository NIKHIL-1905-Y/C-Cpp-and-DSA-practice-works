#include <stdio.h>
int main()
{
    int i,sum=0;
    int a[5]={2,4,8,16,32};
    for(i=0;i<5;i++)
    {
        sum=sum + a[i];
    }
    printf("%d is the sum of elements in the array",sum);
    return 0;
}