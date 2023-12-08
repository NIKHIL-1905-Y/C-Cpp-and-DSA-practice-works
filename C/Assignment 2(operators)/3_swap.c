#include <stdio.h>
int main()
{
    int a,b,temp;
    printf("enter the values of a and b\n");
    scanf("a=%d b=%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("the value of a=%d and value of b=%d",a,b);
    return 0;


}