//10. Write a program to print all Armstrong numbers under 1000
#include <stdio.h>
#include <math.h>
int main()
{

    int count=0,rem,sum=0,i,n;

    printf("the Armstrong numbers between 1000 are: \n");
   
    for( i=1;i<=1000;i++)

   {
    
     n=i;
     while(n!=0)
    {
       
        n=n/10;
        count++;


    }
    n=i;
    
    //  while(n!=0)
    //  {
    //      rem=n%10;
    //     sum=pow(rem,count)+sum;
    //     n=n/10;

    //  }
     sum = pow(n % 10, count) + pow((n % 100 - n % 10) / 10, count)+ pow((n % 1000 - n % 100) / 100, count);
    
    if(sum==i)
    {
        printf(" %d ",i);
    }
    count=0;

}
return 0;
}