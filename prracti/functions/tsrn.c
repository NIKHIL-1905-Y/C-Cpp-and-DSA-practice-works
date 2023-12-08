#include<stdio.h>//TAKES SOMETHING RETURN NOTHING
void add(int ,int);
int main()
{
    int a,b;
    printf("Enter the values of a and b\n");
    scanf("%d %d",&a,&b);
    add(a,b);
    return 0;
}
void add(int x,int y)
{
   

    printf("Addition =%d",x+y);
}
