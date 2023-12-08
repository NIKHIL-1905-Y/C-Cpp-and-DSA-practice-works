//4. Write a recursive function to print first N even natural numbers in reverse order
#include <stdio.h>
void  printeven(int n)
{
    if(n>=1){
    
    printf(" %d ",2*n);
    printeven(n-1);
   }
}
int main()
{
    int n;
    printf("Enter the number \n");
    scanf("%d",&n);
    printf("The reverse of first %d even natural numbers are \n",n);
    printeven(n);
 


}