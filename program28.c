#include <stdio.h>
int main()
{
    int hardness, tensile;
    float carboncontent;
    printf("enter the hardness, carbon content and tensile strength of steel:");
    scanf("%d%f%d", &hardness, &carboncontent, &tensile);
    if ((hardness > 50) && (carboncontent < 0.7) && (tensile > 5600))
    {
        printf("grade 10");
    }
    else if ((hardness > 50) && (carboncontent < 0.7))
    {
        printf("grade 9");
    }
    else if ((carboncontent < 0.7) && (tensile > 5600))
    {
        printf("grade 8");
    }
    else if ((hardness > 50) && (tensile > 5600))
    {
        printf("grade 7");
    }
    else if (hardness > 50 || carboncontent < 0.7 || tensile > 5600)
    {
        printf("grade 6");
    }
    else
    {
        printf("grade 5");
    }
    return 0;
}