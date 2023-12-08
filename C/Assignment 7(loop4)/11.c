//11. Write a program to find the position of first 1 in LSB
#include <stdio.h>
int main()
{
    int n,count=0;
    printf("enter the number \n");
    scanf("%d",&n);
    while(n!=0)
    {
         count++;
        if(n&1==1)
        {
            break;
        }
       
        n=n>>1;

        
    }
    printf("%d is the first position of LSB",count);
}