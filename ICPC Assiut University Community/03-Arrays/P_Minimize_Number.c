#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int dividedArr[n];

    for(int p = 0; p < n; p++){
        if(arr[p]%2 != 0){
            break;
        }
    }

    return 0;
}