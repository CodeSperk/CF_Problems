#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int initialNum = 1;

    for(int i = 0; i < n; i++){
        for(int j = initialNum; j <= initialNum + 2; j++){
            printf("%d ", j);
        }
        printf("PUM\n");
        initialNum += 4;
    }

    return 0;
}