#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    int min = INT_MAX;
    int max = INT_MIN;
    int minPosition = 0;
    int maxPosition = 0;

    for(int i = 0; i< n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]<min){
            min = arr[i];
            minPosition = i;
        }
        if (arr[i]> max){
            max = arr[i];
            maxPosition = i;
        }
    }

    int temp = arr[minPosition];
    arr[minPosition] = arr[maxPosition];
    arr[maxPosition] = temp;

   for(int i = 0; i < n; i++){
    printf("%d ", arr[i]);
   }
    
    return 0;   
}