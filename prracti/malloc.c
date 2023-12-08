#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i;
    int *p;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));

    printf("Enter %d values \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
    return 0;
}