/**
 * https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P
 * 
 * Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".
 */

#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    int firstDigit = num / 1000;
    if (firstDigit % 2 == 0){
        printf("EVEN");
    } else {
        printf("ODD");
    }

    return 0;
}
