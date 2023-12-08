#include <stdio.h>
int main()
{
    int x;
    printf("Enter the number \n");
    scanf("%d",&x);

    
    x=x>>5;
    printf("%d",x);
    return 0;

}