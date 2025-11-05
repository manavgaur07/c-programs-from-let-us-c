#include <stdio.h>

int main()
{
    int n;
    float x[100], y[100];
    float sum_x = 0, sum_y = 0, sum_xy = 0, sum_x2 = 0;
    float m, c;

    printf("Enter the number of data points: ");
    scanf("%d", &n);

    printf("Enter the data points (x, y):\n");
    for (int i = 0; i < n; i++)
    {
        printf("x[%d] = ", i + 1);
        scanf("%f", &x[i]);
        printf("y[%d] = ", i + 1);
        scanf("%f", &y[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum_x += x[i];
        sum_y += y[i];
        sum_xy += x[i] * y[i];
        sum_x2 += x[i] * x[i];
    }
    m = (n * sum_xy - sum_x * sum_y) / (n * sum_x2 - sum_x * sum_x);
    c = (sum_y - m * sum_x) / n;

    printf("\nEquation of the best fit line:\n");
    printf("y = %.3fx + %.3f\n", m, c);

    printf("\nSlope (m) = %.3f", m);
    printf("\nIntercept (c) = %.3f\n", c);

    return 0;
}