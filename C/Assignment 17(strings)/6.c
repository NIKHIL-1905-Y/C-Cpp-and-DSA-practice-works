//Wap to reverse a string
#include <stdio.h>

int main()
{
    int i,length=0;
    char ch[20];
    printf("Enter the String\n");
    scanf("%s",&ch);
      for(i=0;ch[i]!='\0';i++)
    {
        length++;
    }
    printf("%d\n",length);
   
        
    for(i=length-1;i>=0;i--)
    {
        printf("%c",ch[i]);
    }
}