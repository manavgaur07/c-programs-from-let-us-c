#include <stdio.h>
int main()
{
    float otpay;
    int hours, i=1;
    while (i<=10)
    {
    printf ("Enter the number of hours worked:\n");
    scanf("%d", &hours);
    if (hours>=40)
    otpay = (hours-40) * 120;
    else
    otpay=0;
    printf("hours %d otpay=%.2f\n", hours, otpay);
    i++;
    }
    return 0;    
}