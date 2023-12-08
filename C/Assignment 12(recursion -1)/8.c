//8. Write a recursive function to print binary of a given decimal number
#include <stdio.h>
int binary(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n%2+10*binary(n/2);
}
int main()
{
    int n;
    printf("Enter the number \n");
    scanf("%d",&n);
    int ans=binary(n);
    printf("%d",ans);
}