#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char digits[n+1];
    scanf("%s", digits);

    int sum = 0;
    int i = 0;
    while(digits[i] != '\0'){
        sum+= digits[i] - '0';
        i++;
    }
    printf("%d", sum);


    return 0;
}