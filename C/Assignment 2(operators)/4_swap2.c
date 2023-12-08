#include <stdio.h>
int main()
{
    int a,b,sum;
    printf("Enter two numbers a nd b\n");
    scanf("a=%d b=%d",&a,&b);
    sum=a+b;
    b=sum-b;
    a=sum-a;
    printf("the new value of a =%d and b=%d",a,b);
    return 0;
}