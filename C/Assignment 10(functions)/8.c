//8. Write a function to calculate the number of arrangements one can make from n items
//and r selected at a time. (TSRS)
#include <stdio.h>


int fact(int n)
{
    int i,f=1;
    for(int i=1;i<=n;i++)
    {
        f=i*f;
        
    }
    return f;
}
int nPr(int n,int r)
{
    int num=fact(n);
    int deno=fact(n-r);
    int ans=num/deno;
    return ans;
    
    
}
int main()
{
    int n,r;
    printf("Enter the number of terms and and value of r\n");
    
    scanf("%d %d",&n,&r);
    

    int out=nPr(n,r);

    printf("the value of nPr is %d",out);
    return 0;
}