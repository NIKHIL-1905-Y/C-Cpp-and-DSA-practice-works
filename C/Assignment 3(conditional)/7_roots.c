//7.
//Write a program to check whether roots of a given quadratic equation are real &
//distinct, real & equal or imaginary roots

#include <stdio.h>
int main()
{
    int d,a=2,b=9,c=7;
    


    
     d=b*b-4*a*c;

     printf("%d\n",d);
     
    if(d>0)
    {
        printf("the roots are distinct");
    }
    else if(d==0)
    {
        printf("the roots are real and equal");
    }
    else{
        printf("the roots are imaginary");
    }
    return 0;

}