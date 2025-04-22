#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int isLuckyNoFound = 0;
    for(int i = a; i <=b; i++){

        int num = i;
        int isLucky = 0;
        while(num > 0){
            if(num%10 == 4 || num%10 == 7){
                isLucky = 1;
                num /= 10;
            }else{
                isLucky = 0;
                break;
            }
        }
        if(isLucky){
            printf("%d ", i);
            isLuckyNoFound = 1;
        }
    }
    if(!isLuckyNoFound){
        printf("-1");
    }

    return 0;
}