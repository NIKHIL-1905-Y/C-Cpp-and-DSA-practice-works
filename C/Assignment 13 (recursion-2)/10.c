//10. Write a program in C to calculate the power of any number using recursion
#include <stdio.h>

int power(int base, int a) {
    if (a != 0)
        return (base * power(base, a - 1));
    else
        return 1;
}
int main()
{
    int x,n;
    printf("Enter the number \n");
    scanf("%d",&x);
    printf("Enter the power \n");
    scanf("%d",&n);

    int ans=power(x,n);
    printf("%d",ans);
    return 0;
}