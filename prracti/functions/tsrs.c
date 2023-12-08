#include<stdio.h>//TAKES SOMETHING RETURN SOMETHING
int  add(int ,int);
int main()
{
    int a,b,c;
    printf("Enter the values of a and b\n");
    scanf("%d %d",&a,&b);
    c=add(a,b);
    printf("Addition =%d",c);

    return 0;
}
int add(int x,int y)
{
   return x+y;

    
}
