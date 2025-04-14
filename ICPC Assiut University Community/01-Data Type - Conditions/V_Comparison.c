#include <stdio.h>

int main()
{
    int a, b;
    char op;

    scanf("%d %c %d", &a, &op, &b);

    if(op == '<'){
        a < b ? printf("Right") : printf("Wrong");
    }else if(op == '>'){
        a > b ? printf("Right") : printf("Wrong");
    }else{
       a == b ? printf("Right") : printf("Wrong");
    }

    return 0;

}