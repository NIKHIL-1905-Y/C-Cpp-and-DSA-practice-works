//2. Write a program to calculate sum of first N even natural numbers
#include <stdio.h>
int main()
{
    int n,sum;
    printf("Enter the number upto which sum is to be printed\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2==0){
            sum=sum+i;
            
        }
        
        

    }
    printf("the sum ofeven  natural numbers upto %d is %d",n,sum);
    return 0;

}