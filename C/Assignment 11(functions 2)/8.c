//8. Write a function to print PASCAL Triangle. (TSRN)
#include <stdio.h>

int fact(int x)
{
    int f=1;
    for(int i=1;i<=x;i++)
    {
        f=i*f;
    }
    return f;
}

int nCr(int n,int r)
{
    int ncr;
    int div=(fact(n-r))*fact(r);
    ncr=(fact(n))/div;
    return ncr;
}
void pascal(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            int y=nCr(i,j);
            printf(" %d ",y);
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter the number of lines upto which u want to print the pascal's triangle\n");
    scanf("%d",&n);
    pascal(n);
    return 0;
}