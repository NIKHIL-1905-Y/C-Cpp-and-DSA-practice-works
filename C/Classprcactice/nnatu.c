#include <stdio.h> 
int main()
{
    int num;
    printf("Enter the number whose table has to be printed \n");
    scanf("%d",&num);
    for (int i=1;i<=10;i++)
    {
        if(num==5&& i==6)
        continue;
        
        
         printf("%d*%d=%d\n",num,i,num*i);
         
        
        

    }
    return 0;
}
