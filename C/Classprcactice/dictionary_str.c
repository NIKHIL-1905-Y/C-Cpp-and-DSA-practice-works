#include <stdio.h>
#include <string.h>
int main()
{
    char name[5][20];
    char temp[20];
    int i,j;
    printf("Enter the strings\n");
    for(i=0;i<5;i++)
    {
        gets(name[i]);
    }
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(strcmp(name[i],name[j])>0)
            {
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
           
        }
    }
    for(i=0;i<3;i++){

    printf("%s ",name[i]);//u can use puts in place of printf in c//
    }
    return 0;

}