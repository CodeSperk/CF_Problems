#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    int firstDigit = num / 1000;
    if (firstDigit % 2 == 0){
        printf("EVEN");
    } else {
        printf("ODD");
    }

    return 0;
}
