#include <stdio.h>
float Si(float ,float,float);
int main()
{
    float r,y,p,i;
    printf("Enter \nthe rate\nyear\nprinciple value\n");
    scanf("%f %f %f",&r,&y,&p);
    i= Si(r,y,p);
    printf("the simple interest is equal to=%f",i);
    return 0;



}
float Si(float x,float y,float z)

{
   float si=x*y*z/100;


    return si;
}