#include <stdio.h>
#include <math.h>
int main()
{
    float degree, radian, result;
    printf("Enter the angle in degree:");
    scanf("%f", &degree);
    radian = degree * 3.14 / 180;
    result = pow(sin(radian), 2) + pow(cos(radian), 2);
    (fabs ( result - 1.0 ) < 0.0001)
    ? printf("yes, sin²(%.2f)+cos²(%.2f)=1\n", degree, degree)
    : printf("no, sin²(%.2f)+cos²(%.2f)=1 (result=%f)\n", degree, degree, result);
    return 0;
} 