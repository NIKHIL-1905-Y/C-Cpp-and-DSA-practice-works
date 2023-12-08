#include<stdio.h>
int main()
{
    int num,div,mod,reverse=0;
    printf("Enter the number to be checked whether palindrome or not \n");
    scanf("%d",&num);
    div=num;
    while(div>0)
    {
        
        mod=div%10;
        
        reverse=reverse*10+mod;
        div=div/10;

    }
    printf("the reversed number is %d\n",reverse);
    if(reverse==num){
        printf("palindrome");
    }
    else{
        printf("not a palindrome");
    }
}