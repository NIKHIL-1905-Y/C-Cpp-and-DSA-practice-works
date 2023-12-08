//9. Write a recursive function to print octal of a given decimal number
#include <stdio.h>
int octal(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n%8+10*octal(n/8);
}
int main()
{
    int n;
    printf("Enter the number \n");
    scanf("%d",&n);
    int ans=octal(n);
    printf("%d",ans);
}