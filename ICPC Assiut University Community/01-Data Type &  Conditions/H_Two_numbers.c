#include <stdio.h>
#include <math.h>

int main(){
    int a , b;
    scanf("%d %d", &a, &b);

    float div = (float) a/ b;
    int florred = floor(div);
    int ceiled = ceil(div);
    int rounded = round(div);

    printf("floor %d / %d = %d\n", a, b, florred);
    printf("ceil %d / %d = %d\n", a, b, ceiled);
    printf("round %d / %d = %d\n", a, b, rounded);

    return 0;
}