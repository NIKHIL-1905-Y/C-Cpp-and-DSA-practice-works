//2. Write a function to calculate HCF of two numbers. (TSRS)
#include <stdio.h>
int lcm(int x,int y)
{
    int i;
    for(i=1;i<=x*y;i++)
    {
        if(i%x==0 &&i%y==0)
        {
            return i;
            break;

        }
    }

}
int hcf(int x,int y)

{
    int gcd;
    gcd=(x*y)/lcm(x,y);
    return gcd;
}
int main()
{
    int x,y;
    printf("Enter two numbers\n");
    scanf("%d %d",&x,&y);
    int z=hcf(x,y);
    printf("The hcf of %d and %d is %d",x,y,z);
    return 0;

}