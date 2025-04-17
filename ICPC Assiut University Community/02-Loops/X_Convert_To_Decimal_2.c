#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);

    for(int i = 0; i< testCase; i++){
        int n;
        scanf("%d", &n);

        int binaryVal = 0;
        while (n > 0){
            if(n%2 == 1){
                binaryVal = binaryVal *10 + 1;
            }
        }
        
    }

    return 0;
}