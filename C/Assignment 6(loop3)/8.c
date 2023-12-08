#include <stdio.h>
int main()
{
    int n,f=1;              //f is a indicator
    printf("Enter the number to be checked whether prime or not\n");
    scanf("%d",&n);
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            f==2;
            break;
           
        }
    }
       
       
       
       
        if(f==1)
        {
             printf("The number is  prime \n");
            
        }
        else {
            printf("The number is not prime\n");
            
        }
        return 0;
    
}