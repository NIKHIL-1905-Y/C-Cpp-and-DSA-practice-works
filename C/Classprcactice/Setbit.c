#include <stdio.h>
int main()
{
    int x,new;

    printf("Enter the number shose third digit  to be set\n");
    scanf("%d",&x);
    new =x|4;
    printf("the new number after setting third digit is %d",new);
    return 0;


}