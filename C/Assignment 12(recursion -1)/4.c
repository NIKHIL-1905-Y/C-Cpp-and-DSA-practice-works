//4. Write a recursive function to print first N odd natural numbers in reverse order
#include <stdio.h>
void  printodd(int n)
{
    if(n>=1){
    
    printf(" %d ",2*n-1);
    printodd(n-1);
   }
}
int main()
{
    int n;
    printf("Enter the number \n");
    scanf("%d",&n);
    printf("The reverse of first %d odd natural numbers are \n",n);
    printodd(n);
 


}