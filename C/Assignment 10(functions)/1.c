//1. Write a function to calculate the area of a circle. (TSRS)

#include <stdio.h>
float area(float r);
int main()
{
    float r,c;
    printf("Enter the radius\n");
    scanf("%f",&r);
    c=area(r);
    printf("Area =%f",c);
    return 0;
}
float area(float r)
{
    float area=3.14*r*r;
   return area;
}
