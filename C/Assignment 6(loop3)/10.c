#include <stdio.h>
int main()
{
    int num,reverse=0,mod;
    printf("Enter the number to be reversed\n");
    scanf("%d",&num);
    while(num>0)
    {
        mod=num%10;
        reverse=reverse*10+mod;
        num=num/10;
        
        



    }
    printf("the revrsed number is %d ",reverse);


}