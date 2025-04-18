#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    int min = INT_MAX;
    int minElement = 0;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] == min){
            minElement++;
        }else if(arr[i] < min){
            min = arr[i];
            minElement++;
        }
    }

    minElement > 1 ? printf("Unlucky\n") : printf("Lucky\n");

    printf("%d", minElement);

    return 0;

}