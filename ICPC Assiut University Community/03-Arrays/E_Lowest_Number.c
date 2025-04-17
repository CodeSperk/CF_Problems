#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    int lowestNum = INT_MAX;
    int lowestNumPosition = 1;

    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
        if(arr[i] < lowestNum){
            lowestNum = arr[i];
            lowestNumPosition = i + 1;
        }
    }

    printf("%d %d", lowestNum, lowestNumPosition);
    
    return 0;
}