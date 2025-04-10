#include <stdio.h>

int main()
{
    int testCase;

    scanf("%d", &testCase);

    for(int i = 0; i < testCase; i++)
    {
        int num;
        scanf("%d", &num);

        int firstDigit = num/10;
        int secondDigit = num%10;
        int sum = firstDigit + secondDigit;
        printf("%d\n", sum);
    }

    return 0;
}