#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);


    int firstVal = 0, secondVal = 1;
    if(n == 1){
        printf("%d", firstVal);
    }else if(n >= 2){
        printf("%d %d", firstVal, secondVal);
    }

    int nth2 = firstVal;
    int nth1 = secondVal;
    for(int i = 3; i <= n; i++){
        int nth = nth2 + nth1;
        printf(" %d", nth);
        nth2 = nth1;
        nth1 = nth;
    }

    return 0;
}
