#include <stdio.h>

int main()
{
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);

    int sum = 0;

    for(int i = 1; i <=n; i++){
        if(i < 10 && i >=a && i<=b){
            sum +=i;
        }else{

            int num = i;
            int digitSum = 0;
            while(num > 0){
                digitSum += num%10;
                num /= 10;
            }

            if(digitSum >= a && digitSum <=b){
                sum+= i;
            }
        }
    }

    printf("%d", sum);
    return 0;
}