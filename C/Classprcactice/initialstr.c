#include <stdio.h>
int main()
{
    char name[20];
    int i,length=0;
    printf("Enter your name\n");
    gets(name);
    for(i=0;name[i]!='\0';i++)
    {
        length++;

    }
    printf(" the length of string is =%d ",length);
}