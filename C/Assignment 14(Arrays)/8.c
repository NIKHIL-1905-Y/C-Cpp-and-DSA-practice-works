////7. Write a program to find second smallest in an array.Take array values from the user.
#include <stdio.h>
    int main()
    {
        int a[10]={2,5,10,4,3,11,15,35,36};
        int i,min1=-2,min2=-1;
        for(i=0;i<10;i++)
        {
            if(a[i]>min1)
            {
                min1=min2;
                min2=a[i];
            }

            else if(min2>a[i])
            {
                min2=a[i];
            }
        }
        printf("Second largest element is %d \n \n",min2);

    }