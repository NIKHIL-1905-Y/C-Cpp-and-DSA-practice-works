#include<stdio.h>
int main()
{
    int week;
    printf("Enter the week number \n");
    scanf("%d",&week);
    switch(week)
    {
        case 1:printf("Have a funny SUNDAY");
        break;
        case 2:printf("Have a Busy Monday");
        break;
        case 3:printf("Have a loving Tuesday");
        break;
        case 4:printf("Have a Working Wednesday");
        break;
        case 5:printf("Have a realaxing thursday");
        break;
        case 6:printf("Have a Enjoying Friday");
        break;
        case 7:printf("Have a partying Saturday");
        break;
        default:printf("Enter a valid week");
        break;
       


        

    }
    return 0;
}