#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the character of Alphabet\n");
    scanf("%c",&ch);
    if((ch>='A')&&(ch<='Z'))
    {
        printf("The  Alphabet is in upper case\n");
    }
    else if((ch>='a')&&(ch<='z'))
    {
        printf("The Alphabet is in lower case\n");
    }
    else {
        printf("Enter the valid Alphabet");
    }
}