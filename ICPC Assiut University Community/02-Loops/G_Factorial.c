/**
 * https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G
 * 
 * Given a number N. Print the factorial of number N.
 */

 #include <stdio.h>

 int main(){
     int testCase;
     scanf("%d", &testCase);
     for(int i = 1; i<=testCase; i++){
         int num;
         scanf("%d", &num);
         long long result = 1;
         for(int j = num; j>=1; j--){
             result = result * j;
         }
         printf("%lld\n", result);
     }
     return 0;
 }