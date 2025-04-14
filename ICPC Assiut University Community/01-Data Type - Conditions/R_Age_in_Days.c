#include <stdio.h>

int main()
{
    int days;
    scanf("%d", &days);
    
    int years = 0;
    int months = 0;
    
    if(days >= 365){
        years = days/365;
        days = days%365;
    }
    if(days >= 30)
    {
        months = days/30;
        days = days%30;
    }

    printf("%d years\n%d months\n%d days", years, months, days);

    return 0;
}