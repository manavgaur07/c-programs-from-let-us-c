#include <stdio.h>
int main()
{
    float r, g, b, white, c, m, k, y;
    printf("Enter RGB colour:(0-255)\n");
    scanf("%f%f%f", &r, &g, &b);
    if (r == 0 && g == 0 && b == 0)
    {
        c = m = y = 0;
        k = 1;
    }
    else
    {
        white = (r / 255.0);
        if ((g / 255.0) > white)
            white = g / 255.0;
        if ((b / 255.0) > white)
            white = b / 255.0;
        c = (white - (r / 255.0)) / white;
        m = (white - (g / 255.0)) / white;
        y = (white - (b / 255.0)) / white;
        k = 1 - white;
    }
    printf("cmyk values are:");
    printf("cyan= %.2f\n", c);
    printf("magenta= %.2f\n", m);
    printf("yellow= %.2f\n", y);
    printf("black= %.2f\n", k);
    return 0;
}