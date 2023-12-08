//wap to count the occurence of a given character in a given string
#include <stdio.h>
int main() 

{
    char cha[]="Nikhil";
    char ch='i';
    int i,count =0;
   
    for(i=0;cha[i]!='\0';i++)
    {
        if(cha[i]==ch)
        {
            count++;
        }

    }
    printf("The occurence of %c is %d",ch,count);
    return 0;

}