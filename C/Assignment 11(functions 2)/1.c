//1. Write a function to calculate LCM of two numbers. (TSRS)
#include <stdio.h>

int lcm(int x,int y)
{
     int i;
  
    for(i=1;i<=x*y;i++)
    {
        if(i%x==0&&i%y==0)
        {
           return i;
            break;
        }
    }
   
}
int main()
{
    int x,y;
   printf("Enter two integers\n");
   scanf("%d%d", &x, &y);
  int z= lcm(x,y);
  printf("the lcm of %d and %d is %d",x,y,z);
  return 0;
}
  