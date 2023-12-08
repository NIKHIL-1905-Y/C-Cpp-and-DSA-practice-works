//9. Write a program in C to read n number of values in an array and display it in reverse
//order. Take array values from the user
#include <stdio.h>
    int main()
    {
        int i,n;
        int a[5];
       printf("Enter the size of array\n");
        scanf("%d",&n);
        printf("Enter  the elements of an Array\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
    
        //  for(i=0;i<n;i++)
        //  {
         
        //     a[i]=a[n-1-i];
        //     printf(" %d \n",a[i]);

        //  }
        
         printf("The reversed Array is \n");
         for(i=n-1;i>=0;i--)
        {
             printf(" %d ",a[i]);
         }
        return 0;
    }