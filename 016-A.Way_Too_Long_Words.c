#include <stdio.h>
#include <string.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);
    char word[100];
    for (int i = 0; i < testCase; i++)
    {
        scanf("%s", word);
        int length = strlen(word);
        length <= 10 ?
            printf("%s\n", word) :        
            printf("%c%d%c\n", word[0], length - 2, word[length - 1]);
    }

    return 0;
}