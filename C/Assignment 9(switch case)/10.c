//10. C program to find all roots of a quadratic equation using switch case
#include <stdio.h>
#include <math.h> 

int main()
{
    float a, b, c;
    float r1, r2, i;
    float d;

    printf("Enter values of a, b, c of quadratic equation (aX^2 + bX + c):\n ");
    scanf("%f%f%f", &a, &b, &c);

    d = (b * b) - (4 * a * c);
    
    switch(d > 0)
    {
        case 1:
            
            r1 = (-b + sqrt(d)) / (2 * a);
            r2 = (-b - sqrt(d)) / (2 * a);

            printf("Two distinct and real roots exists: %.2f and %.2f",r1, r2);
            break;

        case 0:
        
            switch(d < 0)
            {
                case 1:
                
                    r1 = r2 = -b / (2 * a);
                    i = sqrt(-d) / (2 * a);

                    printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f", r1, i, r2, i);
                    break;

                case 0:
                    
                    r1 = r2 = -b / (2 * a);

                    printf("Two equal and real roots exists: %.2f and %.2f", r1, r2);

                    break;
            }
    }

    return 0;
}