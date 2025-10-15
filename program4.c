#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, s, area;
    printf("Enter length of side a:\n");
    scanf("%f", &a);
    printf("Enter length of side b:\n");
    scanf("%f", &b);
    printf("Enter length of side c:\n");
    scanf("%f", &c);
    s= (a + b + c )/2;
    area= sqrt(s * (s-a) * (s-b) * (s-c));
    printf("Area of triangle is :%f\n", area);
    return 0;



}
