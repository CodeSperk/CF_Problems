#include <stdio.h>
#include <limits.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);

        int a[n];
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
        }

        int smallest = INT_MAX;
        for (int i = 1; i < n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                int pair = a[i] + a[j] + j - i;
                if (pair < smallest)
                {
                    smallest = pair;
                }
            }
        }
        printf("%d\n", smallest);
    }

    return 0;
}