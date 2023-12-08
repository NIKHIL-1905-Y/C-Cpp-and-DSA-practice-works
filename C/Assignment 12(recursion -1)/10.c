//10. Write a recursive function to print reverse of a given number
#include <stdio.h>

void reverse(int n,int rev)
{
    if(n==0)
    {
        printf("%d",rev);
        return ;
    }
    
    rev= n%10 + rev*10;
    reverse(n/10,rev);
    
}
int main()
{
    int n;
    printf("Enter the number \n");
    scanf("%d",&n);
    reverse(n,0);
    // printf("the reverse of num %d is %d",n,ans);
}