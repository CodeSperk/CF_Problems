/**
 * https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N
 * 
 * Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter
 */

 #include <stdio.h>

 int main()
 {
     char x;
     scanf("%c", &x);
 
     if(x >= 65 && x <= 96){
         printf("%c", x + 32);
     }else{
         printf("%c", x -32);
     }
     return 0;
 }
 