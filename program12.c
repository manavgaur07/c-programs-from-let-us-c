#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c ,d,e , f, g, h;
    printf ("enter the numerator and denominator:");
    scanf("%f%f", &a, &b);
    c= sin(a/b);
    d= cos(a/b);
    e= tan(a/b);
    f= 1/sin(a/b);
    g= 1/cos(a/b);
    h= 1/tan(a/b);
    printf("value of sin is%f\n", c);
    printf("value of cos is%f\n", d);
    printf("value of tan is%f\n", e);
    printf("value of cosec is%f\n", f);
    printf("value of sec is%f\n", g);
    printf("value of cot is%f\n", h);
    return 0;

}