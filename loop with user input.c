#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numberOfValues;int number; int sum = 0;
    double average;

    printf("Enter the number of values: ");
    scanf("%d", &numberOfValues);

    for (int j = 1; j <= numberOfValues; j++)
    {
        printf("Enter value %d: ", j);
        scanf("%d", &number);

        sum += number;
    }

    average = (double)sum / numberOfValues;

    printf("\nSum: %d\n", sum);
    printf("Average: %.2f\n", average);
    return 0;
}
