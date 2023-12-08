#include <stdio.h>
int main()

{
    float R,A;

    float pi=3.14;
        printf("enter the radius of the circle \n");
    scanf("%f",&R);
    A=pi*R*R;
    printf("The Area of circle with radius %f is %f",R,A);
    return 0;

}