//7. Write a recursive function to calculate HCF of two numbers
#include <stdio.h>

int HCF(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            return HCF(a - b, b);
        }
        else
        {
            return HCF(a, b - a);
        }
    }
    return a;
}
int main()
{
    int a, b, result;
 
    printf("Enter the two numbers to find their HCF: \n");
    scanf("%d%d", &a, &b);
    result = HCF(a, b);
    printf("The HCF of %d and %d is %d.\n", a, b, result);
}
 



