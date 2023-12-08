#include<stdio.h>//TAKES NOTHING RETURN NOTHING
void add();
int main()
{
    add();
    return 0;
}
void add()
{
    int a,b;
    printf("Enter the values of a and b\n");
    scanf("%d %d",&a,&b);

    printf("Addition =%d",a+b);
}
