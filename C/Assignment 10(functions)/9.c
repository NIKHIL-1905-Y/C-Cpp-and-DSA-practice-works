//9. Write a function to check whether a given number contains a given digit or not.
//(TSRS)
#include <stdio.h>

int check(int n,int dig)

{
    while(n!=0)
    {
        int rem=n%10;
        if(rem==dig)
        {
            return 1;
            break;
        }
        n=n/10;
    }


}
int main()
{
    int n,dig;
    printf("Enter the number \n");
    scanf("%d",&n);
    printf("Enter the digit to be searched \n");
    scanf("%d",&dig);
    int ch=check(n,dig);
    if(ch==1)
    {
        printf("The digit is found\n");
    }
    else 
    {
        printf("Digit not Found\n");
    }
    return 0;

}