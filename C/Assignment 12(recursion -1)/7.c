//7. Write a recursive function to print squares of first N natural numbers

#include <stdio.h>
void  printsqr(int n)
{
    if(n>=1){

        printsqr(n-1);
    printf(" %d ",n*n);
    
   }
}
int main()
{
    int n;
    printf("Enter the number \n");
    scanf("%d",&n);
    printf("The square of first %d even natural numbers are \n",n);
    printsqr(n);
 


}