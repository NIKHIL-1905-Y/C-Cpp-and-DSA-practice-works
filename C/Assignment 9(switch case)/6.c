//6. Program to check whether a year is a leap year or not. Using switch statement
#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year \n");
    scanf("%d",&year);
    switch(year%100==0)
    {
        case 0: 
        switch(year%4==0)
        {
            case 0:printf("It is not a leap year\n");
            break;

            case 1:printf("It is  a leap year\n");
            break;
        }
        break;

        case 1:
        switch(year%400==0)
        {
            case 0:
                    printf("It is not a leap year\n");
                    break;
            case 1:printf("It is a leap year\n");
             
        }
}
}