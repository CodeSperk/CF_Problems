#include <stdio.h>

int main()
{
    int l1, r1, l2, r2;
    scanf("%d %d %d %d", &l1, &r1, &l2, &r2);

    int hasIntersection = 1;

   int left = l1 < l2 ? l1 : l2;
   int right = r1 < r2 ? r1 : r2;

   if(!hasIntersection){
    printf("-1");
   }

    return 0;
}