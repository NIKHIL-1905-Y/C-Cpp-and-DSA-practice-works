//7. Write a function to print first N terms of Fibonacci series (TSRN)

#include <stdio.h>
void fib(int n)
{
    int f=0;
    int l=1;
    printf("%d %d",f,l);
    for(int i=2;i<n;i++)
    {
        int sum=f+l;
        l=sum;
        f=l;
        printf(" %d ",sum);

    }
}
int main()
{
    int n;
    printf("Enter the number of terms upto which u want to print the fibbonnaci series\n");
    scanf("%d",&n);
    fib(n);
    return 0;

}