//2. Write a program to print first N terms of Fibonacci series

#include <stdio.h>
int main()
{
   
   int a=0;
   int b=1;
   int c=0;
   int n,i;
   printf("Enter the number \n");
   scanf("%d",&n);
   printf("the first %d terms of the series are\n",n);
   printf(" %d ",a);
    printf(" %d ",b);
   
   int count =2;
   while(count<n)
   {
    c=a+b;
    count++;
     printf(" %d ",c);
    a=b;
    b=c;
   
   }
   

}
