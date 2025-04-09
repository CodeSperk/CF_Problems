/**
 * https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/F
 * 
 * F. Multiplication table
 */

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 1; i<=12; i++)
    {
        printf("%d * %d = %d\n", n, i, n*i);
    }
}