#include <stdio.h>

int main()
{
    int n, m;
    int isTerminated = 1;
    while (isTerminated)
    {
        scanf("%d %d", &n, &m);

        if (n <= 0 || m <= 0)
        {
            isTerminated = 0;
        }
        else
        {
            int sum = 0;
            int smaller = n < m ? n : m;
            int greater = n > m ? n : m;
            for (int i = smaller; i <= greater; i++)
            {
                sum += i;
                printf("%d ", i);
            }
            printf("sum =%d\n", sum);
        }
    }
    return 0;
}