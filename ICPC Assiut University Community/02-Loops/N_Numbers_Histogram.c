#include <stdio.h>

int main()
{
    char s;
    scanf("%c", &s);
    int n;
    scanf("%d", &n);
    
    for(int i = 0; i< n; i++){
        int num;
        scanf("%d", &num);

        for(int j = 0; j < num; j++){
            printf("%c", s);
        }
        printf("\n");
    }
}