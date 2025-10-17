#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year:");
    scanf("%i", &year);
    
if(year%100==0)
{
if(year%400==0)
printf("The year is leap year.\n");
else
printf("The year is not a leap year.");
}
else
{
if(year%4==0)
 printf("The year is leap year.\n");
else
printf("The year is not a leap year.");
}
return 0;
}