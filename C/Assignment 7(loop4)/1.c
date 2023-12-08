//1. Write a program to find the Nth term of the Fibonnaci series.
#include <stdio.h>
int main()
{
   int a=0;
   int b=1;
   int c=0;
   int n,i;
   printf("Enter the number \n");
   scanf("%d",&n);

   for(i=2;i<=n;i++)
   {
    c=a+b;
    a=b;
    b=c;
   }
   printf("%d th term of fibbnnaci series is %d\n ",n,b);
}
