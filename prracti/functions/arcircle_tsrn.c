#include <stdio.h>
void area(float r);
int main()
{
    float r;
    printf("Enter the radius\n");
    scanf("%f",&r);
    area(r);
    return 0;
}
void area(float r)
{
    float area=3.14*r*r;
    printf("Area =%f",area);
}
