//7. Write a program to count digits in a given number
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number whose digits to be calculated\n");
    scanf("%d",&n);
    int count=0;
   while(n>0)
   {
    
    n=n/10;
    count++;



   }
   printf("the number of digits in the number is %d\n",count);
   
}