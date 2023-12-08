//10. Write a program in C to copy the elements of one array into another array.Take array
//values from the user
#include <stdio.h>
    int main()
    {
        int i,n;
        int a[10],b[10];
       printf("Enter the size of array\n");
        scanf("%d",&n);
        printf("Enter  the elements of an Array\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
      
        for(i=0;i<n;i++)
        {
            printf("%d  ",a[i]);

        }
        printf("\n");
        for(i=0;i<n;i++)
        {
            b[i]=a[i];
        }
          printf("The copied elements of Array are\n");
        for(i=0;i<n;i++)
        {
            printf("%d ",b[i]);
        }
    }