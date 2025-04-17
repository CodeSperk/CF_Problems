#include <stdio.h>

int reversedPyramid(int h);

int main()
{
    int n;
    scanf("%d", &n);

    reversedPyramid(n);

    return 0;
}


int reversedPyramid(int h){
    for(int i = 1; i <= h; i++){
        for(int j = 0; j< i; j++){
            printf("*");
        }
        printf("\n");
    }
}