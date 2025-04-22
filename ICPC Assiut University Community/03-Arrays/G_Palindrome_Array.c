#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    int arrCpy[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
        arrCpy[i] = arr[i];
    }

    int i = 0, j = n -1;
    while(i < j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }    

    int isPalindrome = 0;
    for(int i = 0; i<n; i++){
        if(arrCpy[i] == arr[i]){
            isPalindrome = 1;
        }else{
            isPalindrome = 0;
            break;
        }
    }

    isPalindrome ? printf("YES") : printf("NO");

    return 0;
}