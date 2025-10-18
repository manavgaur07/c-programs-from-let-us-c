#include <stdio.h>
int main()
{
    float weight, height, bmi;
    printf("Enter the weight(kgs) and height(metre)");
    scanf("%f %f", &weight, &height);
    bmi = (weight / (height * height));
    printf("BMI%f\n", bmi);
    if (bmi < 15)
        printf("the person is in starvation range");
    else if ((bmi > 15.0) && (bmi < 17.6))
       { printf("the person is in anorexic range");}
    else if ((bmi > 17.5) && (bmi < 18.6))
        {printf("the person is in underweight range");}
    else if ((bmi > 18.5) && (bmi < 25.0))
        {printf("the person is in ideal range");}
    else if ((bmi > 24.9) && (bmi < 26.0))
        {printf("the person is in overweight range");}
    else if ((bmi > 29.9) && (bmi < 40.0))
        {printf("the person is in obese range");}
    else
        {printf("the person is in morbidly obese range");}
        return 0;
}