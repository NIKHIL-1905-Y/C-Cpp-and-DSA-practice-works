#include <stdio.h>
int main()
{
    int a[5];
    printf("Enter the maximum elemnents in the array\n");
    int i;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    int max;
    a[0]=max;
    for(i=1;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("%d is the maximum element \n",max);
    return 0;
}