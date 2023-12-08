//5. Write a program to check whether two given numbers are co-prime numbers or not

#include <stdio.h>
int main() {
   int num1, num2, x, y, temp, gcd;
   printf("Enter two integers\n");
   scanf("%d%d", &x, &y);
   num1 = x;
   num2 = y;
   while (num2 != 0) {
      temp = num2;
      num2 = num1 % num2;
      num1 = temp;
   }
   gcd=num1;
   
   if(gcd==1)
   {
    printf("The numbers are Coprime\n");
   }
   else{
    printf("Not Coprime");
   }
   
   return 0;
}

