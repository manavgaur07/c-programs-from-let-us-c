#include <stdio.h>
int main()
{
    int s1, s2, s3;
    printf("Enter the sides of triangle:");
    scanf("%d%d%d", &s1, &s2, &s3);

    if (s1 == s2 && s2 != s3){

        printf("triangle is isosceles");
         printf("triangle is isosceles");}

    else

        if (s1 == s2 && s2 == s3)

        printf("triangle is equitorial");

    else if (s1 != s2 && s2 != s3)

        printf("triangle is scalene");

    else

        if ((s1 * s1) + (s2 * s2) == (s3 * s3))

        printf("trisngle is right triangle");

    else
        printf("triangle is invalid");

    return 0;
}