/**
 * https://codeforces.com/problemset/problem/231/A
 */

#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);

    int solvable = 0;

    for(int i = 0; i < n; i++){
        int isSure = 0;
        int Petya, Vasya, Tonya;
        scanf("%d %d %d", &Petya, &Vasya, &Tonya);
        if(Petya){
            isSure += 1;
        }if(Vasya){
            isSure += 1;
        }if(Tonya){
            isSure += 1;
        }

        if(isSure >= 2){
            solvable += 1;
        }
    }
    printf("%d", solvable);

    return 0;
}