//6. Write a program to print all Prime numbers under 100
#include <stdio.h>
int main()
{
   int i,j,flag;
    
    printf("The prime number between 1 and 100 are:\n");
    
    for(i=2;i<=100;i++)
    {
        flag=0;
       for(j=2;j<=i/2;j++)
       {
        if(i%j==0)
        {
            flag++;
            break;
        }
       }
      if(flag==0 )
      {
        printf(" %d ",i);

      }
     
        
    }
    return 0;

}