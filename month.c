// calculate a Month or Days
#include <stdio.h>

int main()
{
    // Take input from user
    int months, days;
    printf("Enter Days\n");
    scanf("%d", &days);

    // Output
    months = days / 30;
    days = days % 30;
    printf("months = %d days = %d", months, days);

    return 0;
}
