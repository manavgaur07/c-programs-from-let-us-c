#include <stdio.h>
#include <math.h>
int main()
{
    float x, y, r, phi, a, b;
    printf("enter the x and y coordinates");
    scanf("%f%f", &x, &y);
    a=pow(x,2.0);
    b=pow(y,2.0);
    r= sqrt(a+b);
    phi= atan(y/x);

 printf("here are the r values:%f\n", phi);
 
 printf("here are the phi values:%f\n", phi);

}