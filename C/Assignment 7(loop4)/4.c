//4. Write a program to calculate HCF of two numbers

#include <stdio.h>
int main() {
   int num1, num2, x, y, temp, gcd, lcm;
   printf("Enter two integers\n");
   scanf("%d%d", &x, &y);
   num1 = x;
   num2 = y;
   while (num2 != 0) {
      temp = num2;
      num2 = num1 % num2;
      num1 = temp;
   }
   gcd = num1;
   lcm = (x*y)/gcd;
   printf("GCD of %d and %d = %d", x, y, gcd);
   return 0;
}

