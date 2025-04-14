/**
 * https://codeforces.com/contest/617/problem/A
 * 
 * An elephant decided to visit his friend. It turned out that the elephant's house is located at point 0 and his friend's house is located at point x(x > 0) of the coordinate line. In one step the elephant can move 1, 2, 3, 4 or 5 positions forward. Determine, what is the minimum number of steps he need to make in order to get to his friend's house.
 */

 #include <stdio.h>
 
 int main() {
     int fh;
     scanf("%d", &fh);
     int minSteps = 0;
     int rD = fh;
     for(int i = 5; i >= 1; i--){
         if(rD >= i){
             minSteps += rD / i;
             rD = rD % i;
         }
     }
     printf("%d", minSteps);
     return 0;
 }