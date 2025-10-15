# include <stdio.h>
int main()
{
    float da, hra, bs, gs;
    printf("\nenter basic salary of ramesh:");
    scanf("%f", &bs);
    da = 0.4 * bs;
    hra = 0.2*bs;
    gs = bs + da + hra;
    printf("gross salary of ramesh is = %f\n", gs);
    return 0;
}
