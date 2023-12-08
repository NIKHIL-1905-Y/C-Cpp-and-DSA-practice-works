#include <stdio.h>
int main()
{
    int num,div;
    printf("Enter the number to be printed\n");
    scanf("%d",&num);
    div =num/10;
    printf("the number without last digit will be %d",div);
    return 0;
}