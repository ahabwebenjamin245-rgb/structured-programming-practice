#include <stdio.h>
#include <stdlib.h>

int main()
{ int num = 0;
   printf("Enter an integer: ");
   scanf("%d", &num);

   if (num % 2 == 0){
    printf("Even number.\n");
   }
   else {
    printf("Odd number.\n");
   }
    return 0;
}
