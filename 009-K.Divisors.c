/**
 * https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/K
 * 
 *  Given a number N. Print all the divisors of N in ascending order.
 */ 

 #include <stdio.h>

 int main()
 {
     int n;
     scanf("%d", &n);
 
     for(int i = 1; i<=n; i++)
     {
        if(n%i == 0){
         printf("%d\n", i);
        }
     }
     return 0;
 }