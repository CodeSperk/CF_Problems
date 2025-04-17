#include <stdio.h>

int getGCD(int a, int b);

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
   
    printf("%d\n", getGCD(a, b));

    return 0;
}

int getGCD(int a, int b){
    int gcd = 1;

    int greaterNum = a > b ? a : b;
   
        for(int i = 1; i <= greaterNum; i++){
            if(i > gcd && a%i == 0 && b%i ==0){
                gcd = i;
            }
        }
    return gcd;
}