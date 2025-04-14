#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

   unsigned long long int product = (unsigned long long int) a * b * c *d;

   int result = (unsigned long long int) product % 100;
   printf("%d", result);

    return 0;
}