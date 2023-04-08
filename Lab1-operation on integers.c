#include <stdio.h>

int main() {
   int a, b, sum, diff, prod, quot, rem;

   // input two integers
   printf("Enter the first integer: ");
   scanf("%d", &a);
   printf("Enter the second integer: ");
   scanf("%d", &b);

   // perform addition, subtraction, multiplication, division, and modulo operations
   sum = a + b;
   diff = a - b;
   prod = a * b;
   quot = a / b; // integer division
   rem = a % b;   // modulo operator

   // print the results
   printf("Sum of %d and %d is %d\n", a, b, sum);
   printf("Difference between %d and %d is %d\n", a, b, diff);
   printf("Product of %d and %d is %d\n", a, b, prod);
   printf("Quotient of %d divided by %d is %d\n", a, b, quot);
   printf("Remainder when %d is divided by %d is %d\n", a, b, rem);

   return 0;
}

