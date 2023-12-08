#include <stdio.h>
int main()
{
    char ch;
    int a,b;
    printf("Enter the character A for Addition \n B for subtraction \n C for multiplication \n D for division \n E for exist\n");
    scanf("%c",&ch);
    printf("Enter the numbers\n");
    scanf("%d %d",&a,&b);
    switch(ch)
    {
        case 'A':printf("Additon=%d",a+b);
        break;
         case 'B':printf("Additon=%d",a-b);
        break;
         case 'C':printf("Additon=%d",a*b);
        break;
         case 'D':printf("Additon=%d",a/b);
        break;
         case 'E':printf("Exit");
         break;

    }
    return 0;
}