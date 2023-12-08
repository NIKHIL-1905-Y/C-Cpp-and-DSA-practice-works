//Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR
//and convert it into USD.

#include <stdio.h>
int main()
    {
        int x;

        float amt;
        printf("Enter the amount  to be converted to USD\n");
        scanf("%d",&x);
        amt=x/76.23;
        printf("THE amount in USD IS %f",amt);
        return 0;




    }
