#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number\n ");
    scanf("%d",&n);
    for(int i=n;i>=0;i--)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
        
    }
    return 0;
}