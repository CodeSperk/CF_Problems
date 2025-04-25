#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 0; i<t; i++){
        char s[51], t[51];
    scanf("%s %s", s, t);

    int i = 0, j = 0;
    while(s[i] != '\0' && t[j] != '\0')
    {
        printf("%c%c", s[i],t[i]);
        i++;
        j++;
    }
    while (s[i] != '\0')
    {
        printf("%c", s[i]);
        i++;
    }
    while (t[j] != '\0')
    {
        printf("%c", t[j]);
        j++;
    }
    printf("\n");
    }


    return 0;
}