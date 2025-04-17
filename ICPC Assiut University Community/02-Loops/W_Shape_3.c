#include <stdio.h>

int pyramid(int h);
int reversedPyramid(int h);

int main()
{
    int n;
    scanf("%d", &n);

    pyramid(n);
    reversedPyramid(n);

    return 0;
}


int pyramid(int h){

    for(int i = 1; i <= h; i++){

        //print space
        for(int s = h -1; s >= i; s--){
            printf(" ");
        }

        printf("*");
        for(int j = 1; j < i; j++){
            printf("**");
        }
        printf("\n");
    }

    return 0;
}

int reversedPyramid(int h){

    for(int i = h; i >= 1; i--){

        //print space
        for(int s = h -1; s >= i; s--){
            printf(" ");
        }

        printf("*");
        for(int j = 1; j < i; j++){
            printf("**");
        }
        printf("\n");
    }

    return 0;
}