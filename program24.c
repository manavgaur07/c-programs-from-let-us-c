#include <stdio.h>
int main()
{
    float s1, s2, s3, sum, largeside;
    printf("Enter the sides of triangle:");
    scanf("%f%f%f", &s1, &s2, &s3);
    if ( s1 > s2)
    {
      if ( s1 > s3)
        {
           sum= s2+s3; largeside= s1;
    }
    else
    {
           sum= s1+s2; largeside= s3;
    }   
} 
else
{ 
    if ( s2 > s3)
    {
        sum = s1 + s3; largeside= s2;
    }
    else   
    {
        sum= s1+s2; largeside=s3;
    }
}
if(sum>largeside)
printf("the triange is a valid triangle");
else
printf("the triangle is invalid.");
return 0;
}