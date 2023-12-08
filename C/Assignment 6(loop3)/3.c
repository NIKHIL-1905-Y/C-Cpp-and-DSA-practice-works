
//3. Write a program to calculate sum of first N odd natural numbers
#include <stdio.h>
int main()
{
    int n,sum;
    printf("Enter the number uptill which sum is to be printed\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2==1){
            sum=sum+i;
            
        }
        
        

    }
    printf("the sum of odd natural numbers uptill %d is %d",n,sum);
    return 0;

}