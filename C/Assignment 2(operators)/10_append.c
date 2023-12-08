//
//Write a program to input a number from the user and also input a digit. Append a
//digit in the number and print the resulting number. (Example - number=234 and
//digit=9 then the resulting number is 2349)
//
#include <stdio.h>
int main()
{
    int num,dig;
    printf("Enter the  number and the digit\n");
    scanf("%d %d",&num,&dig);
    num=num*10;
    num=num+dig;
    printf("the resulting appended number is %d",num);
    return 0;
    

}