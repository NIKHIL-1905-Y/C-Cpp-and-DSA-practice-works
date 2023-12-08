//WAP to calculate length of a string
#include <stdio.h>
int main()
{
    int i;
    char ch[20];
   int count =0;
   printf("Enter the String\n");
   scanf("%s",&ch);
    for(i=0;ch[i]!='\0';i++)
    {
        count++;
    }
    printf("The length of String is %d ",count);

}