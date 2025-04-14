#include <stdio.h>
#include <string.h>

int main()
{
    char c[100];
    scanf("%s", c);

    int length = strlen(c);
    char u[100] = "\0";
    int uniqueLength = 0;

    for(int i = 0; i < length; i++){
        if(!strchr(u, c[i])){
            u[uniqueLength] = c[i];
            uniqueLength++;
        }
    }

    uniqueLength%2 == 0 ? printf("CHAT WITH HER!\n") : printf("IGNORE HIM!\n");

    return 0;
}