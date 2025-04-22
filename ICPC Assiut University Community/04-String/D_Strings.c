#include <stdio.h>
#include <string.h>

int main(){
    char A[11], B[11];
    scanf("%s %s", &A, &B);
    int lengthA = strlen(A);
    int lengthB = strlen(B);

    printf("%d %d\n", lengthA, lengthB);
    printf("%s%s\n", A, B);

    char temp = A[0];
        A[0]= B[0];
        B[0] = temp;
    printf("%s %s\n", A, B);
    
    return 0;
}