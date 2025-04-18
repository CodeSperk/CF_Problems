#include <stdio.h>

int main()
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
    int mainDiagonalSum = 0;
    for(int i = 0; i < n; i++){
        mainDiagonalSum += arr[i][i];
    }
    int secondaryDiagonalsum = 0;
    int k = 0;
    for(int j = n - 1; j >= 0; j--){
        secondaryDiagonalsum += arr[k][j];
        k++;
    }
    int difference = mainDiagonalSum - secondaryDiagonalsum;
    int absDifference = difference < 0 ? difference * (-1) : difference;

    printf("%d\n", absDifference);
    return 0;
}