// Chapter 02 2.7(b).c
// A program to calculate the sum of variables.

#include <stdio.h>
#include <stdlib.h>

int main()
{
int integer1 = 0; int integer2 = 0; int total =0; int product =0; int quotient =0; int remainder =0;
   printf("Enter the first integer:");
   scanf("%d", &integer1);

   printf("Enter the second integer:");
   scanf("%d", &integer2);

   total = integer1 + integer2;
   product = integer1 * integer2;
   quotient = integer2 / integer2;
   remainder = integer1 % integer2;

   printf("Sum is %d\n", total);
   printf("Product is %d\n", product);
   printf("Quotient is %d\n", quotient);
   printf("Remainder is %d\n", remainder);



    return 0;
}
