#include <stdio.h>
int main()
{
    float a, b;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &a);
    b = (5.0/9.0) * (a-32);
    printf("Temperature in cesius=%.2f\n", b);

    return 0;
}