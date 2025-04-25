#include <stdio.h>
#include <string.h>

int main()
{
    char x[21], y[21];
    scanf("%s %s", &x, &y);

    int val = strcmp(x, y);

    if(val < 1){
        printf("%s", x);
    }else{
        printf("%s", y);
    }

    return 0;
}