#include <stdio.h>

int main()
{
    char x;
    scanf("%c", &x);
    if(!(x >=48 && x<=57)){
       printf("ALPHA\n");
       if(x >= 65 && x<=96){
        printf("IS CAPITAL");
       }else{
        printf("IS SMALL");
       }
    }else{
        printf("IS DIGIT");
    }
    return 0;
}