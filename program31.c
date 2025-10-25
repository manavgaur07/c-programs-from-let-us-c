#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year:");
    scanf("%f", &year);
    ( ( year % 4 == 0 && year % 100 !=0 ) || ( year % 400 == 0 ) )
    ? printf("the year is leap year")
    : printf("the year is not a leap year");
    return 0;
}