#include <stdio.h>
#include <string.h>

int main()
{
    int test;
    scanf("%d", &test);
    
    for(int i = 0; i<test; i++){
        char str[101];
        scanf("%s", &str);
        int length = strlen(str);

        if(length > 10){
            printf("%c%d%c\n", str[0], length-2, str[length -1]);
        }else{
            printf("%s\n", str);
        }
    }
    return 0;
}