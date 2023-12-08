#include <stdio.h>
int main()
{
    int num,mod;
    printf("enter the number \n");
    scanf("%d",&num);
    mod=num%10;
    printf("the unit digit of the number is %d",mod);
    return 0;

}