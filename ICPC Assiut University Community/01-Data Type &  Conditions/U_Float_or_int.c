#include <stdio.h>

int main()
{
    float n;
    scanf("%f", &n);

    int intPart = n;
    float floatPart = n - intPart;
    int isInt = floatPart == 0;
    
    if(isInt){
        printf("int %d", intPart);
    }else{
        printf("float %d %.3f", intPart, floatPart);
    }

    return 0;
}