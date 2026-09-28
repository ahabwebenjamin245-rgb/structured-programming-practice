#include <stdio.h>
#include <stdlib.h>

int main()
{ int number,largest;

    printf("Enter number 1: ");
    scanf("%d", &number);

    largest = number;

    for (int count = 2; count <= 10; count++)
    {
        printf("Enter number %d: ", count);
        scanf("%d", &number);

        if (number > largest)
        {
            largest = number;
        }
    }

    printf("\nThe largest number: %d\n", largest);


    return 0;
}
