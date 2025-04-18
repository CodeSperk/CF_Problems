#include <stdio.h>

int mian()
{
    int n;
    scanf("%d", &n);

    int arr[n][n];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("%d", arr[1][1]);
    
    return 0;
}