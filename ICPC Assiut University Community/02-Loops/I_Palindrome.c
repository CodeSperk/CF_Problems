#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int original = n;
    int reversed = 0;

    while(n > 0){
        reversed = reversed * 10 + n%10;
        n= n/10;
    }

    printf("%d\n", reversed);
    reversed == original ? printf("YES"): printf("NO");

    return 0;
}
