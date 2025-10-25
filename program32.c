#include <stdio.h>
int main()
{
    float d1, d2, d3;
    printf("Enter the 3 values:");
    scanf("%f %f %f", &d1, &d2, &d3);
    ( d1 > d2  &&  d1 > d3 )
    ? printf("Greater%f\n", d1)
    :
    ( d2 > d1 &&  d2 > d3 )
    ? printf("Greater%f\n", d2)
    : printf("Greater%f\n",d3);
    return 0;
}