#include <stdio.h>
int main()
{
    float length, breadth, radius, perimeter, area, circumference;
    printf("enter length of rectangle:\n");
    scanf("%f", &length);
    printf("enter breadth of rectangle:\n");
    scanf("%f", &breadth);
    printf("enter radius of circle:\n");
    scanf("%f", &radius);
    perimeter= 2*(length+breadth);
    printf("perimeter of rectangle= %f\n", perimeter);
    area= 3.14*radius;
    printf("area of circle=%f\n", area);
    circumference= 2*3.14*radius;
    printf("circumference of circle= %f\n", circumference);
}