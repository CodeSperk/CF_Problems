/**
 * https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S
 * 
 * S. Sum of Consecutive Odd Numbers
 */

 #include <stdio.h>

 int main()
 {
     int testCase;
     scanf("%d", &testCase);
     for (int j = 1; j <= testCase; j++)
     {
         int x, y;
         scanf("%d %d", &x, &y);
 
         if(x > y){
             int temp = x;
             x = y;
             y = temp;
         }
 
         int sum = 0;
             for (int i = x + 1; i < y; i++)
             {
                 if (i % 2 == 1)
                 {
                     sum = sum + i;
                 }
             }
      
         printf("%d\n", sum);
     }
     return 0;
 }