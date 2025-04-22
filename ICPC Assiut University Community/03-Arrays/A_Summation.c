#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int arr[n];
    long long sum = 0;

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    sum < 0 ? printf("%lld", sum * (-1)): printf("%lld", sum);
    
    return 0;
}