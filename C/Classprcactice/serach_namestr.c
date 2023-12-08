#include <stdio.h>
#include <string.h>
int main()
{
    char names[5][20];
    char name[10];
    int i,j;
    printf("Enter the strings\n");
    for(i=0;i<5;i++)
    {
        gets(names[i]);
    }
    printf("Enter the String to be searched\n");
    gets(name);
    for(i=0;i<5;i++)
    {
        if(strcmp(name,names[i])==0)
        {
            printf("String found\n");
            
    
        }
        else
        {
            printf("Not found\n");
            break;
        }
    }
   
    return 0;
}
