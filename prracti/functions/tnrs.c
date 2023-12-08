#include<stdio.h>//TAKES NOTHING RETURN SOMETHING
int add();
int main()
{
    int c;
   c= add();
   printf("Addition=%d",c);
    return 0;
}
int add()
{
   int a,b;
    printf("Enter the values of a and b\n");
    scanf("%d %d",&a,&b);
    return a+b;
    


    
}
