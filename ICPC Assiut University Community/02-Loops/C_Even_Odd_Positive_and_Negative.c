/**
 * https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C
 */

 #include <stdio.h>

 int main()
 {
     int n;
     scanf("%d", &n);
     int even = 0,
         odd = 0,
         positive = 0,
         negative = 0;
     
     for(int i = 0; i < n; i++)
     {
         int num;
         scanf("%d", &num);
         if(num%2 == 0){
             even++;
         }else{
             odd++;
         }
 
         if(num > 0){
             positive++;
         }else if(num < 0){
             negative++;
         }
     }
 
     printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, positive, negative);
 
     return 0;
 }