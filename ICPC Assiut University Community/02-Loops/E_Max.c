/**
 * https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E
 */
#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    int max = INT_MIN;

    for(int i = 0; i < n; i++){
        int num;
        scanf("%d", &num);
        if(num > max){
            max = num;
        }
    }
    printf("%d", max);
}