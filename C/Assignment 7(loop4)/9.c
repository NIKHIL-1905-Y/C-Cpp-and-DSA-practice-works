//9. Write a program to check whether a given number is an Armstrong number or not
#include <stdio.h>
#include <math.h>
int main()
{
    int n;

    printf("Enter the number \n");
    scanf("%d",&n);
    int count=0,rem,sum=0;
    int x=n;
    int z=n;
    while(x!=0)
    {
       
        x=x/10;
        count++;


    }
    
    while(n!=0)
    {
        rem=n%10;
        sum=pow(rem,count)+sum;
        n=n/10;

    }
    
    if(sum==z)
    {
        printf("The number is Armstrong ");
    }
    else{
        printf("The number is not Armstrong ");
    }


}