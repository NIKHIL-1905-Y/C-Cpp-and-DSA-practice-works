#include <stdio.h>
int main()
{
    int num,sum;
    printf("Enter the three digit  number whose sum is to be printed\n");
    scanf("%d",&num);
    int n1=num%10;
    num=num/10;
    int n2=num%10;
    num =num/10;
    int n3= num%10;
    sum=n1+n2+n3;


    printf("the sum  of three  digit  number  is %d",sum);
    return 0;
}