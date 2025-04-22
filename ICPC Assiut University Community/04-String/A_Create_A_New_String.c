#include <stdio.h>
#include <string.h>

int main()
{
    char S[1001], T[1001];
    scanf("%s", &S);
    scanf("%s", &T);

    int sLength = strlen(S);
    int tLength = strlen(T);

    printf("%d %d\n", sLength, tLength);
    printf("%s %s\n", S, T);

    return 0;
}