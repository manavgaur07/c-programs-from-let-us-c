#include <stdio.h>
#include <math.h>
int main()
{
    float l1, l2, g1, g2, d;
    printf("Enter the value of latitudes:");
    scanf("%f%f",&l1, &l2);
    printf("enter the value of longitudes\n");
    scanf("%f%f",&g1, &g2);
    d= 3969* acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*(g2-g1));
    printf("here is the distance in nautical miles:,%f\n", d);
    return 0;
}