#include <stdio.h>

int main()
{
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    long long int result = (a * b)%100;
        result = (result * c)%100;
        result = (result * d)%100;
    
    printf("%02lld\n", result); //print with leading zero 

    return 0;
}