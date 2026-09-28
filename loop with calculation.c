#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 0;
    for (int number = 7; number <= 100; number += 7)
    {
        sum += number;
    }

    printf("Sum: %d\n", sum);

    return 0;
}
