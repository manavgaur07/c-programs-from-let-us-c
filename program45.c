#include <stdio.h>
#include <math.h>
int main()
{
    int p, n, q, i;
    float r, a;
    for (i = 1; i <= 10; i++)
    {
        printf("Enter the principal:");
        scanf("%d", &p);
        printf("Enter the rate:");
        scanf("%f", &r);
        printf("Enter the compound interest:");
        scanf("%d", &q);
        printf("Enter the time:");
        scanf("%d", &n);

        a = p * pow((1 + (r / q)), n * q);
        printf("amount is %.2f\n", a);
    }
    return 0;
}