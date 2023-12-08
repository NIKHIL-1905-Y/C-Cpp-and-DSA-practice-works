#include <stdio.h>
int main()
{
    char name[5][20];
    int count=0,i,j;
    printf("Enter 5 names\n");
    for(i=0 ;i<5; i++)
    {
        gets(name[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=0 ; name[i][j] !='\0' ; j++)
        {
            if(name[i][j]=='a')
            {
                count++;
            }
        }
    }
    printf("The number of a's in the Strings are %d ",count);
    return 0;
}