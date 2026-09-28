#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
    printf("N\tN+3\tN+6\tN+9\n");

    for (n = 7; n <= 35; n += 7)
    {
        printf("%d\t%d\t%d\t%d\n", n, n+3, n+6, n+9);
}
  return 0;
}
