//5. Write a recursive function to print first N even natural numbers
#include <stdio.h>
void  printeven(int n)
{
    if(n>=1){
    
    
    printeven(n-1);
    printf(" %d ",2*n);
   }
}
int main()
{
    int n;
    printf("Enter the number \n");
    scanf("%d",&n);
    printf("The first %d even natural numbers are \n",n);
    printeven(n);
 


}