#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    int min = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        
        if(arr[i] < min){
            min = arr[i];
        }
    }

    int minElement = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == min){
            minElement++;
        }
    }
    minElement % 2 == 0 ? printf("Unlucky\n") : printf("Lucky\n");
    
    return 0;
}