#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int sum = (long long int) n * (n+1) / 2;

    printf("%lld", sum);
}