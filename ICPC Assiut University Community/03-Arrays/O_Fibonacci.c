#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[1];
    scanf("%d", &arr[0]);

    int sum = 0;
    while (arr[0] > 0){
        sum += arr[0]%10;
        arr[0] = arr[0]/10;
    }
    printf("%d", sum);
    


    return 0;
}