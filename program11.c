#include <stdio.h>
#include <math.h>
int main()
{
    float t, v, wcf, a;
    printf("Enter the temperature and wind velocity:");
    scanf("%f%f", &t, &v);
    a= (0.4275*t);  
    wcf= 35.74+0.6215*t+(a-35.75)*pow(v,0.6);
    printf("here is the wind chill factor%f\n", wcf);
}