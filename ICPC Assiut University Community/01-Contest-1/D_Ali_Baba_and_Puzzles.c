#include <stdio.h>

int main()
{
    int a, b, c;
    long long int d;
    scanf("%d %d %d %lld", &a, &b, &c, &d);

    if (
        (long long int)a + b - c == d ||
        a + b * (long long int)c == d ||
        a - b + c == d ||
        a - b * (long long int)c == d ||
        (long long int)a * b + c == d ||
        (long long int)a * b - c == d)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}