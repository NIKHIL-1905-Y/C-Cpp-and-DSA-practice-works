//10.
//Write a program which takes the cost price and selling price of a product from the
//user. Now calculate and print profit or loss percentage.
#include <stdio.h>
int main()
{
    float Cp,Sp,lp,pp,loss,profit;
       printf("Enter the C.P and S.P\n");
        scanf("%f %f",&Cp,&Sp);
    if(Cp>Sp)
    {
        printf("Loss\n");
        loss=Cp-Sp;
        printf("the loss is %f \n",loss);
        lp=loss*100;
        lp=lp/Cp;
        printf("the loss is %f percentage",lp);
    }
    else if (Sp>Cp)
    {
        printf("PROFIT\n");
        profit=Sp-Cp;
        printf("the profit is %f \n",profit);
        pp=profit*100;
        pp=pp/Cp;

        printf("the profit is %f percentage",pp);


    }
    else
    {
        printf("Neither loss nor profit ");
    }
    return 0;
    
}