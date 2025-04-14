#include <stdio.h>

int main()
{
    long long int n, m;
    scanf("%lld %lld", &n, &m);
    long long int sum = n%10 + m%10;

    printf("%lld", sum);

    return 0;
}