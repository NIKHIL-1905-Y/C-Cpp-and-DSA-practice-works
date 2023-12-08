// 10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the
// function
 #include <stdio.h>
 int fact(int n)
 {
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;

    }
    return f;
 }
 int Sum(int n)
 {
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        int f1=fact(i);
        sum=f1/i+sum;
        
    }
    return sum;

 }
 int main()
 {
    int n;
    printf("Enter the number upto which u want to print the sum\n");
    scanf("%d",&n);
    int ans=Sum(n);
    printf(" the sum is %d ",ans);
    return 0;


 }
